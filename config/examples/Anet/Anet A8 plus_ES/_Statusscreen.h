/**
 * Marlin 3D Printer Firmware
 * Derechos de autor (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Basado en Sprinter y grbl.
 * Derechos de autor (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * Este programa es software libre: puede redistribuirlo y/o modificarlo
 * bajo los términos de la Licencia Pública General de GNU publicada por
 * la Free Software Foundation, ya sea la versión 3 de la Licencia o
 * (a su elección) cualquier versión posterior.
 *
 * Este programa se distribuye con la esperanza de que sea útil,
 * pero SIN NINGUNA GARANTÍA; sin siquiera la garantía implícita de
 * COMERCIABILIDAD o IDONEIDAD PARA UN PROPÓSITO PARTICULAR. Consulte la
 * Licencia Pública General de GNU para obtener más detalles.
 *
 * Debería haber recibido una copia de la Licencia Pública General de GNU
 * junto con este programa. Si no es así, consulte <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Imagen personalizada para la pantalla de estado
 *
 * Coloca este archivo en la raíz junto con tus archivos de configuración
 * y habilita CUSTOM_STATUS_SCREEN_IMAGE en Configuration.h.
 *
 * Utiliza la herramienta Marlin Bitmap Converter para crear la tuya propia:
 * https://marlinfw.org/tools/u8glib/converter.html
 */

//
// Imagen del logo de la pantalla de estado
//

#define STATUS_LOGO_Y            6
#define STATUS_LOGO_WIDTH       40

const unsigned char status_logo_bmp[] PROGMEM = {
  B01110000,B00000000,B00001000,B00000011,B10001110,
  B10001000,B00000000,B00001000,B00000100,B01010001,
  B10001010,B11000111,B00111110,B00000100,B01010001,
  B11111011,B00101000,B10001000,B00000111,B11001110,
  B10001010,B00101111,B00001000,B00000100,B01010001,
  B10001010,B00101000,B00001000,B00000100,B01010001,
  B10001010,B00100111,B00000110,B00000100,B01001110,
  B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00001110,B01000000,B00000000,B00000000,
  B00000000,B00010001,B01000000,B00000000,B00000000,
  B00000000,B00010001,B01010001,B00111000,B00000000,
  B00000000,B00011110,B01010001,B01000000,B00000000,
  B00000000,B00010000,B01010001,B00111000,B00000000,
  B00000000,B00010000,B01010001,B00000100,B00000000,
  B00000000,B00010000,B01001110,B00111000,B00000000
};

//
// Utilizar bitmaps predeterminados
//
#define STATUS_HOTEND_ANIM
#define STATUS_BED_ANIM
#define STATUS_HEATERS_X      48
#define STATUS_BED_X          74
