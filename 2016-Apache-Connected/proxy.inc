# More info here: http://wiki.nginx.org/HttpProxyModule proxy_buffering off;
proxy_connect_timeout 59s; proxy_send_timeout 600; proxy_read_timeout 600;
proxy_buffer_size 64k; proxy_buffers 16 32k; proxy_busy_buffers_size 64k;
proxy_temp_file_write_size 64k; proxy_pass_header Set-Cookie; proxy_redirect
off; proxy_hide_header Vary; proxy_hide_header X-Powered-By; proxy_set_header
Accept-Encoding ''; #If you want to get the cache-control and expire headers
from apache, comment out 'proxy_ignore_headers' and uncomment 'proxy_pass_header
Expires;' and 'proxy_pass_header Cache-Control #proxy_pass_header Expires;
#proxy_pass_header Cache-Control; proxy_ignore_headers Cache-Control Expires;
proxy_set_header Referer $http_referer; proxy_set_header Host $host;
proxy_set_header Cookie $http_cookie; proxy_set_header X-Real-IP $remote_addr;
proxy_set_header X-Forwarded-Host $host; proxy_set_header X-Forwarded-Server
$host; proxy_set_header X-Forwarded-For $proxy_add_x_forwarded_for;
proxy_set_header X-Forwarded-Proto $scheme;
