#include <Keyboard.h>

int i = 0;

void setup() {
  Keyboard.begin();
  /* Your setup code here */
}

void loop(){
  /* You loop code here */
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(100);
  Keyboard.print("cmd");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

/* ############# Leave this part here ############# */
  delay(1000);
  i++;
  if(i > 1){while(1){}}
}
