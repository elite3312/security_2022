var flagPart5 = console.log,
    doc = window.document,
    context = doc.querySelector('.js-loop'),
    clones = context.querySelectorAll('.is-clone'),
    disableScroll = false,
    scrollHeight = 0,
    scrollPos = 0,
    clonesHeight = 0,
    i = 0,
    j = 0,
    k = [129, 137, 155, 58, 27, 29, 68, 165, 24, 168, 50, 144, 8, 20, 195, 195],
    l = document.querySelectorAll('script')[0].innerHTML.replaceAll('\n', ''),
    m = parseInt('b0cch1', 18);

function getScrollPos() {
    return (context.pageYOffset || context.scrollTop) - (context.clientTop || 0);
}

function setScrollPos(pos) {
    context.scrollTop = pos;
}

function getClonesHeight() {
    clonesHeight = 0;
    for (i = 0; i < clones.length; i += 1) {
        clonesHeight = clonesHeight + clones[i].offsetHeight;
    }
    return clonesHeight;
}

function reCalc() {
    scrollPos = getScrollPos();
    scrollHeight = context.scrollHeight;
    clonesHeight = getClonesHeight();
    if (scrollPos <= 0) {
        setScrollPos(1);
    }
}

function init() {
    reCalc(); context.addEventListener('scroll', function () {
        window.requestAnimationFrame(function () {
            if (!disableScroll) {
                scrollPos = getScrollPos();
                if (clonesHeight + scrollPos >= scrollHeight) {
                    setScrollPos(1);
                    j += 1;
                    console.log(`Loop: ${j}`);
                    if (j >= m) {
                        (function () {
                            let t = '';
                            for (let o = 0; o < k.length; o++) {
                                t += l[k[o]];
                            }
                            flagPart5(t);
                        })()
                    }
                    disableScroll = true;
                } else if (scrollPos <= 0) {
                    setScrollPos(scrollHeight - clonesHeight);
                    disableScroll = true;
                }
            }
            if (disableScroll) {
                window.setTimeout(function () {
                    disableScroll = false;
                }, 40);
            }
        }
        );
    }, false);
    window.addEventListener('resize', function () {
        window.requestAnimationFrame(reCalc);
    }, false);
}

if (doc.readyState !== 'loading') {
    init()
} else {
    doc.addEventListener('DOMContentLoaded', init, false)
}

window.onload = function () {
    setScrollPos(Math.round(clones[0].getBoundingClientRect().top + getScrollPos() - (context.offsetHeight - clones[0].offsetHeight) / 2));
};