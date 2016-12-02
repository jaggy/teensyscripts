#include "Mac.h"
#include <Arduino.h>

void open(String applicadtion) {
  
}

//void wait() {
//  delay(DELAY);
//}
//
//
///**
// * Press the given modifier key:
// * - Control: MODIFIERKEY_CTRL
// * - Super:   MODIFIERKEY_GUI
// * - Shift:   MODIFIERKEY_SHIFT
// *
// */
//void modifier_key(int modifier, int key) {
//  Keyboard.set_modifier(modifier);
//  Keyboard.send_now();
//  Keyboard.set_key1(key);
//  Keyboard.send_now();
//  wait();
//
//  Keyboard.set_modifier(0);
//  Keyboard.set_key1(0);
//  Keyboard.send_now();
//  wait();
//}
//
//void ctrl(int key) {
//  modifier_key(MODIFIERKEY_CTRL, key);
//}
//
//void cmd(int key) {
//  modifier_key(MODIFIERKEY_GUI, key);
//}
//
//void shift(int key) {
//  modifier_key(MODIFIERKEY_SHIFT, key);
//}
//
//void type(String string) {
//  Keyboard.print(string);
//  wait();
//
//  Keyboard.println("");
//  delay(DELAY * 2);
//}
//
///**
// * Open the application switcher, we're assuming it's
// * Alfred, Spotlight, or even Quicksilver
// * and it's bound to CMD+Space
// */
//void alfred() {
//  cmd(KEY_SPACE);
//}
//
//
//void open(String application) {
//  alfred();
//
//  type(application);
//  
//  wait();
//}

