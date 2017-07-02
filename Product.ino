void Product(){
  javascriptProduct();
  getHeader();

        webpage += "<table class=\"table\">\n";
        
          webpage += "<tr class=\"danger\">\n";
            webpage += "<td>\n";
              webpage += "Red\n";
              webpage += "<br>\n";
              webpage += "<input type=\"range\" id=\"dac5\" min=\"0\" max=\"255\" value=\""+(String)pwm5+"\" step=\"1\" onchange=\"sendPWM(5, this.value)\">\n";
              webpage += "<br>\n";
              webpage += "<span id=\"spPWM5\">"+(String)pwm5+"</span>\n";
              webpage += "</td>\n";
          webpage += "</tr>\n";
          
          webpage += "<tr class=\"success\">\n";
            webpage += "<td>\n";
              webpage += "Green\n";
              webpage += "<br>\n";
              webpage += "<input type=\"range\" id=\"dac6\" min=\"0\" max=\"255\" value=\""+(String)pwm6+"\" step=\"1\" onchange=\"sendPWM(6, this.value)\">\n";
              webpage += "<br>\n";
              webpage += "<span id=\"spPWM6\">"+(String)pwm6+"</span>\n";
              webpage += "</td>\n";
          webpage += "</tr>\n";
          
          webpage += "<tr class=\"info\">\n";
            webpage += "<td>\n";
              webpage += "Blue\n";
              webpage += "<br>\n";
              webpage += "<input type=\"range\" id=\"dac7\" min=\"0\" max=\"255\" value=\""+(String)pwm7+"\" step=\"1\" onchange=\"sendPWM(7, this.value)\">\n";
              webpage += "<br>\n";
              webpage += "<span id=\"spPWM7\">"+(String)pwm7+"</span>\n";
            webpage += "</td>\n";
          webpage += "</tr>\n";
          
          webpage += "<tr>\n";
            webpage += "<td>\n";
              webpage += "High light 1\n";
              webpage += "<br>\n";
              webpage += "<input type=\"range\" id=\"dac8\" min=\"0\" max=\"255\" value=\""+(String)pwm8+"\" step=\"1\" onchange=\"sendPWM(8, this.value)\">\n";
              webpage += "<br>\n";
              webpage += "<span id=\"spPWM8\">"+(String)pwm8+"</span>\n";
              webpage += "</td>\n";
          webpage += "</tr>\n";
        
          webpage += "<tr>\n";
            webpage += "<td>\n";
              webpage += "High light 2\n";
              webpage += "<br>\n";
              webpage += "<input type=\"range\" id=\"dac9\" min=\"0\" max=\"255\" value=\""+(String)pwm9+"\" step=\"1\" onchange=\"sendPWM(9, this.value)\">\n";
              webpage += "<br>\n";
              webpage += "<span id=\"spPWM9\">"+(String)pwm9+"</span>\n";
            webpage += "</td>\n";
          webpage += "</tr>\n";
        
        webpage += "</table>\n";
    
      webpage += "<button type=\"button\" class=\"btn btn-success\" onClick=\"SendCom()\">Restart wifiManager</button>\n"; //Need To reset modul manual just nu
       
  getFooter();
  server.send(200, "text/html", webpage);
}

void javascriptProduct(){  // here you can add javascript to this page
  javaScript = "<script type=\"text/javascript\">\n";
  javaScript += "function SendCom()\n";
  javaScript += "{\n";
  javaScript += "window.open(\"http://" + IpAddress + "/Password\", \"PassWord Manager \", 'width=250,height=250')\n";
  javaScript += "}\n";

  javaScript += "function sendPWM(Pin,Value){\n";
  javaScript += "spChange = \"spPWM\" + Pin;\n";
  javaScript += "document.getElementById(spChange).innerHTML=Value;\n";
  javaScript += "req = new XMLHttpRequest();\n";
  javaScript += "url =\"http://" + IpAddress + "/PinValue\";\n";
  javaScript += "var data = {pin: Pin, value: Value};\n";
  javaScript += "req.open(\"POST\", url);\n";
  javaScript += "req.send(JSON.stringify(data));\n";
  javaScript += "}\n";
  javaScript += "</script>\n";
}
