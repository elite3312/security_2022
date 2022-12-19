###############################
# flag is in the environment. #
###############################
import os
import redis
import pickle
import base64
from datetime import timedelta
from flask_session import Session
from flask import Flask,  render_template, request, send_file, Blueprint, session

DEFAULT_LAYOUT = [
    {'id': 'bocchi', 'left': 350, 'top': 180},
    {'id': 'eye01', 'left': 442, 'top': 275},
    {'id': 'eye02', 'left': 4, 'top': 195},
    {'id': 'eye03', 'left': 8, 'top': 487},
    {'id': 'eye04', 'left': 19, 'top': 764},
    {'id': 'eye05', 'left': 826, 'top': 18},
    {'id': 'eye06', 'left': 853, 'top': 313},
    {'id': 'eye07', 'left': 857, 'top': 524},
    {'id': 'eye08', 'left': 889, 'top': 787},
    {'id': 'lip01', 'left': 536, 'top': 450},
    {'id': 'lip02', 'left': 112, 'top': 361},
    {'id': 'lip03', 'left': 99, 'top': 660},
    {'id': 'lip04', 'left': 113, 'top': 840},
    {'id': 'lip05', 'left': 915, 'top': 212},
    {'id': 'lip06', 'left': 861, 'top': 436},
    {'id': 'lip07', 'left': 876, 'top': 687},
    {'id': 'hair01', 'left': 1122, 'top': 22},
    {'id': 'hair02', 'left': 1270, 'top': 30},
    {'id': 'hair03', 'left': 1162, 'top': 148},
    {'id': 'hair04', 'left': 1128, 'top': 296},
    {'id': 'hako01', 'left': 1131, 'top': 497},
]

app = Flask(__name__, static_folder='./static')

app.config['SESSION_TYPE'] = 'redis'
app.config['SESSION_REDIS'] = redis.Redis(host="redis", port=6379, db=0)
app.config['SESSION_PERMANENT'] = False
app.config['SESSION_USE_SIGNER'] = False
app.config['SESSION_COOKIE_NAME'] = 'fukuwarai_sess'
app.config['SESSION_REFRESH_EACH_REQUEST'] = True
app.config['PERMANENT_SESSION_LIFETIME'] = timedelta(minutes=30)
Session(app)

api = Blueprint('v1', __name__)

def dataGuard(layout) -> bool:
    if type(layout) != list:
        return False
    for item in layout:
        # jsut id, left, top can pass
        if all([True if i in ['id', 'left', 'top'] else False for i in item.keys()]):
            return True
    return False


@app.before_request
def middleware():
    if 'layout' not in session:
        session['layout'] = DEFAULT_LAYOUT.copy()
    return


@app.get('/')
def index():
    if 'code' in request.args:
        return send_file(__file__)
    return render_template('index.html', layout=session['layout'])


@api.post('/save')
def save_layout():
    layout: list[dict] = request.json.get('layout')
    if dataGuard(layout):
        session['layout'] = layout
        return '1'
    return '0'


@api.get('/share')
def share_layout():
    return base64.b64encode(pickle.dumps(session['layout'])).decode()


@api.post('/import')
def import_layout():
    layout = request.json.get('layout')
    layout = pickle.loads(base64.b64decode(layout))
    if dataGuard(layout):
        session['layout'] = layout
        return '1'
    return '0'


app.register_blueprint(api, url_prefix='/api')
app.run('0.0.0.0', 80)