void Password ()
{
  javascriptPassword();
  webpage = "<!DOCTYPE html>\n";
  webpage += "<html>\n";
  webpage += "<head>\n";
  
  webpage += "<meta http-equiv=\"refresh\" content=\"" + refreshPage + "\">\n";
  webpage += "<link rel=\"stylesheet\" href=\"https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css\" integrity=\"sha384-BVYiiSIFeK1dGmJRAkycuHAHRg32OmUcww7on3RYdg4Va+PmSTsz/K68vbdEjh4u\" crossorigin=\"anonymous\">\n";
  webpage +="<link rel=\"stylesheet\" href=\"https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap-theme.min.css\" integrity=\"sha384-rHyoN1iRsVXV4nD0JutlnGaslCJuC7uwjduW9SVrLvRYooPp2bWYgmgJQIXwl/Sp\" crossorigin=\"anonymous\">\n";
  webpage +="<script src=\"https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js\" integrity=\"sha384-Tc5IQib027qvyjSMfHjOMaLkfuWVxZxUPnCJA7l2mCWNIpG9mGCD8wGNIcPD7Txa\" crossorigin=\"anonymous\"></script>\n";
  webpage +="<script src=\"https://ajax.googleapis.com/ajax/libs/jquery/1.12.4/jquery.min.js\"></script>\n";
  webpage += javaScript;
  webpage += "<title>"+title+"</title><style>\n";
  webpage += "</style>\n";
  webpage += "</head>\n";
  webpage += "<body>\n";
      webpage += "<div class=\"container\">\n";
        webpage += "<div class\"container-fluid\">\n";
        
          webpage +="<div class=\"centered\">\n";
             
            if(rightPassword)
            {
              webpage += "<p>reset your wifi modul to set ssid and password</p>\n";
             webpage += "<input type=\"button\" class=\"btn btn-success\" value=\"Done\" onclick=\"windowClose()\">\n";
             rightPassword = false;
              
            }
            else
            {
             webpage += "<input type=\"text\" id=\"PassWord\" name=\"PassWord\">\n";
             webpage += "<button type=\"button\" class=\"btn btn-success\" onClick=\"SendPassword()\">Send</button>\n";
            }
          webpage += "</div>\n";
 
  getFooter();
  server.send(200, "text/html", webpage);
}

void javascriptPassword(){
  javaScript="<script type='text/javascript'>\n";

  javaScript += "function SendPassword()\n";
  javaScript += "{\n";
  javaScript += "var Password = document.getElementById(\"PassWord\").value;\n";
  javaScript += "req = new XMLHttpRequest();\n";
  javaScript += "url =\"http://" + IpAddress + "/RestartWifiManager\";\n";
  javaScript += "var data = {Password: Password};\n";
  javaScript += "req.open(\"POST\", url);\n";
  javaScript += "req.send(JSON.stringify(data));\n";
  javaScript += "setTimeout(function()\n";
  javaScript +="{\n";
  javaScript += "location.reload();\n";
  javaScript += "}, 800); \n";
  javaScript += "}\n";
   
  javaScript += "function windowClose()\n";
  javaScript += "{\n";
  javaScript += "window.open('','_parent',''); \n";
  javaScript += "window.close();\n";
  javaScript += "}\n";
 
  javaScript+="</script>\n";
}

