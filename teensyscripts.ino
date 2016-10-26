#define DELAY 500

void setup() {
  wait();

  open_application("Terminal.app");
  
  type("say boooooooo");
}

void loop() {
  // put your main code here, to run repeatedly:

}

void wait() {
  delay(DELAY);
}

/**
 * Press the given modifier key:
 * - Control: MODIFIERKEY_CTRL
 * - Super:   MODIFIERKEY_GUI
 * - Shift:   MODIFIERKEY_SHIFT
 *
 */
void modifier_key(int modifier, int key) {
  Keyboard.set_modifier(modifier);
  Keyboard.send_now();
  Keyboard.set_key1(key);
  Keyboard.send_now();
  delay(DELAY);

  Keyboard.set_modifier(0);
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay(DELAY);
}

void ctrl(int key) {
  modifier_key(MODIFIERKEY_CTRL, key);
}

void cmd(int key) {
  modifier_key(MODIFIERKEY_GUI, key);
}

void shift(int key) {
  modifier_key(MODIFIERKEY_SHIFT, key);
}

void type(String string) {
  Keyboard.print(string);
  delay(DELAY);

  Keyboard.println("");
  delay(DELAY * 4);
}

/**
 * Open the application switcher, we're assuming it's
 * Alfred, Spotlight, or even Quicksilver
 * and it's bound to CMD+Space
 */
void open_application_switcher() {
  cmd(KEY_SPACE);
}

void open_application(String application) {
  open_application_switcher();

  type(application);

  wait();
}

