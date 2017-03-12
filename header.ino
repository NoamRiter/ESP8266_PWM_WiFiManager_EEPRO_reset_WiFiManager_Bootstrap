void getHeader() {
  webpage = "<!DOCTYPE html>\n";
  webpage += "<html>\n";
  webpage += "<head>\n";
  
  webpage += "<meta http-equiv=\"refresh\" content=\"" + refreshPage + "\">\n";
  webpage += "<link rel=\"stylesheet\" href=\"https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css\" integrity=\"sha384-BVYiiSIFeK1dGmJRAkycuHAHRg32OmUcww7on3RYdg4Va+PmSTsz/K68vbdEjh4u\" crossorigin=\"anonymous\">\n";
  webpage +="<link rel=\"stylesheet\" href=\"https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap-theme.min.css\" integrity=\"sha384-rHyoN1iRsVXV4nD0JutlnGaslCJuC7uwjduW9SVrLvRYooPp2bWYgmgJQIXwl/Sp\" crossorigin=\"anonymous\">\n";
  webpage +="<script src=\"https://ajax.googleapis.com/ajax/libs/jquery/1.12.4/jquery.min.js\"></script>\n";
  webpage +="<script src=\"https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js\" integrity=\"sha384-Tc5IQib027qvyjSMfHjOMaLkfuWVxZxUPnCJA7l2mCWNIpG9mGCD8wGNIcPD7Txa\" crossorigin=\"anonymous\"></script>\n";
  webpage += javaScript;
  webpage += "<title>"+title+"</title><style>\n";
  webpage += "</style>\n";
  webpage += "</head>\n";
    webpage += "<body>\n";
      webpage += "<div class=\"container\">\n";
        webpage += "<div class\"container-fluid\">\n";
        
          webpage +="<div class=\"centered\">\n";
          webpage +="<h1 class=\"text-center\">" + mainHeading + "</h1>\n";
          webpage += "<h3 class=\"text-center\">" + subHeading + "</h1>\n";
          webpage += "</div>\n";
          
          webpage += "<nav class=\"navbar navbar-inverse\">\n";
            webpage += "<div class=\"container-fluid\">\n";
                webpage += "<div class=\"navbar-header\">\n";
                  webpage += "<a class=\"navbar-brand\" href=\"#\">" + menuName + "</a>\n";
                webpage += "</div>\n";
              webpage += "<ul class=\"nav navbar-nav\">\n";
              webpage += "<li><a href=\"/homepage\">Home</a></li>\n";
              webpage += "<li><a href=\"Product\">Product</a></li>\n";
              webpage += "<li><a href=\"Portfolio\">Portfolio</a></li>\n";
              webpage += "<li><a href=\"Services\">Services</a></li>\n";
              webpage += "<li><a href=\"Aboutus\">About us</a></li>\n";
              webpage += "<li><a href=\"Contact\">Contact</a></li>\n";
              webpage += "</ul>\n";
            webpage += "</div>\n";
          webpage += "</nav>\n";
}
