namespace pages
{
  String FirstPage(){
    String page = "<html lang=en-EN><head><meta http-equiv='refresh' content='60'/>";
    page += "<title>ESP32 WebServer</title>";
    page += "<style> body { background-color: #fffff; font-family: Arial, Helvetica, Sans-Serif; Color: #000000; zoom: 300%; }</style>";
    page += "<h3>Toggle LED's</h3>";
    page += "<form action='/' method='POST'>";
    page += "<ul><li>Red-LED";
    page += "<INPUT type='radio' name='LED1' value='1'>ON";
    page += "<INPUT type='radio' name='LED1' value='0'>OFF</li>";
    page += "<li>Blue-LED";
    page += "<INPUT type='radio' name='LED2' value='1'>ON";
    page += "<INPUT type='radio' name='LED2' value='0'>OFF</li>";
    page += "<li>Green-LED";
    page += "<INPUT type='radio' name='LED3' value='1'>ON";
    page += "<INPUT type='radio' name='LED3' value='0'>OFF</li></ul>";
    page += "<INPUT type='submit' value='Submit'>";
    page += "</body></html>";
    return page;
  }
}
