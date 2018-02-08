#include <mbed.h>
#include <C12832.h>

// Using Arduino pin notation
C12832 lcd(D11, D13, D12, D7, D10);

int main()
{
    int j=0;
    // Method to clear the screen.
    lcd.cls();
    // Set cursor at given position. (0,0) = Top left corner
    lcd.locate(0,0);
    lcd.printf("Hello Andrew!");
    lcd.locate(0,10);
    lcd.printf("char %dx%d : %dx%d pixels",
               lcd.columns(), lcd.rows(),
               lcd.width(), lcd.height() );
    lcd.circle(100, 20, 10, 1);
    lcd.pixel(100, 20, 1);
    lcd.circle(100, 20, 5, 1);
    lcd.fillcircle(100,20,2.5,1);
    lcd.line(0,9,128,9,1);
    lcd.rect(0,0,127,31,1);
    lcd.character(80,20,65);

    while(true) {
        lcd.locate(0,20);
        lcd.printf("Counting : %4d",j);
        j++;
        wait(1.0);
    }
}
