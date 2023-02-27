void display_text(String title, String arr[], int margin, int selected) {
  display.clearDisplay();

  display.setTextSize(1);      // Normal 1:1 pixel scale
  display.setTextColor(SSD1306_WHITE); // Draw white text
  display.cp437(true);         // Use full 256 char 'Code Page 437' font

  drawCenterString(title, 0, 6);

  for (int i = 0; i < 4; i++){
    display.setCursor(margin, 20+i*12);
    display.print(arr[i]);
  }

  display.display(); // Update display
  delay(500);
}

void display_title_screen(void){
  display.clearDisplay();

  display.setTextSize(3);
  display.setTextColor(SSD1306_WHITE); // Draw white text
  display.cp437(true);         // Use full 256 char 'Code Page 437' font

  drawCenterString("HPM KEY", 0, 20);

  display.display(); // Update display
  delay(500);
}

void drawCenterString (const String &buf, int x, int y){
  int16_t x1, y1;
  uint16_t w, h;
  display.getTextBounds(buf, x, y, &x1, &y1, &w, &h);
  display.setCursor(64 + x - w/2, y);
  display.print(buf);
}

