#include <pitches.h>
#define buzzerID 8

//Note Assignments
#define eightNote 3000/8
#define quarterNote 3000/4
#define dottedQuarterNote 3000/3
#define halfNote 3000 / 2
#define dottedHalfNote 3000/1.5
#define wholeNote 3000
#define twoWholeNotes 6000

//Scaler for pauses between notes
#define scaler 1.0

void setup() {
  playNote(NOTE_C4,quarterNote);
  playNote(NOTE_G4, dottedQuarterNote);
  playNote(NOTE_C5, eightNote);
  playNote(NOTE_AS4, dottedQuarterNote);
  playNote(NOTE_AS4, eightNote);
  playNote(NOTE_A4, quarterNote);
  playNote(NOTE_G4, eightNote);
  playNote(NOTE_F4, eightNote);
  playNote(NOTE_G4, wholeNote);
  delay(dottedQuarterNote);

  playNote(NOTE_C4,quarterNote);
  playNote(NOTE_G4, dottedQuarterNote);
  playNote(NOTE_C5, eightNote);
  playNote(NOTE_AS4, dottedQuarterNote);
  playNote(NOTE_AS4, eightNote);
  playNote(NOTE_A4, quarterNote);
  playNote(NOTE_G4, eightNote);
  playNote(NOTE_F4, eightNote);
  playNote(NOTE_G4, twoWholeNotes);
  
  playNote(NOTE_G4, halfNote);
  playNote(NOTE_C4, halfNote);
  playNote(NOTE_FS4, dottedHalfNote);
  playNote(NOTE_G4, eightNote);
  playNote(NOTE_A4, eightNote);
  playNote(NOTE_G4, quarterNote);
  playNote(NOTE_E4, eightNote);
  playNote(NOTE_C4, eightNote);
  playNote(NOTE_FS4, quarterNote);
  playNote(NOTE_G4, eightNote);
  playNote(NOTE_A4, eightNote);
  playNote(NOTE_G4, quarterNote);
  playNote(NOTE_D4, quarterNote);
  playNote(NOTE_G4, quarterNote);
  playNote(NOTE_D5, quarterNote);
  playNote(NOTE_D5, halfNote);
  playNote(NOTE_CS5, quarterNote);
  playNote(NOTE_B4, eightNote);
  playNote(NOTE_CS5, eightNote);
  playNote(NOTE_D5, wholeNote);
  delay(dottedQuarterNote);

  playNote(NOTE_C5, halfNote);
  playNote(NOTE_F4, halfNote);
  playNote(NOTE_B4, dottedHalfNote);
  playNote(NOTE_C5, eightNote);
  playNote(NOTE_D5, eightNote);
  playNote(NOTE_C5, quarterNote);
  playNote(NOTE_A4, eightNote);
  playNote(NOTE_F4, eightNote);
  playNote(NOTE_B4, quarterNote);
  playNote(NOTE_C5, eightNote);
  playNote(NOTE_D5, eightNote);
  playNote(NOTE_C5, quarterNote);
  playNote(NOTE_G4, quarterNote);
  playNote(NOTE_C5, quarterNote);
  playNote(NOTE_G4, quarterNote);
  playNote(NOTE_G4, halfNote);
  playNote(NOTE_FS4, quarterNote);
  playNote(NOTE_E4, eightNote);
  playNote(NOTE_FS4, eightNote);
  playNote(NOTE_G4, twoWholeNotes);

  playNote(NOTE_F4, dottedQuarterNote);
  playNote(NOTE_F4, eightNote);
  playNote(NOTE_E4, quarterNote);
  playNote(NOTE_D4, eightNote);
  playNote(NOTE_C4, eightNote);
  playNote(NOTE_D4, dottedHalfNote);
  playNote(NOTE_G4, quarterNote);
  playNote(NOTE_F4, dottedQuarterNote);
  playNote(NOTE_F4, eightNote);
  playNote(NOTE_E4, quarterNote);
  playNote(NOTE_D4, eightNote);
  playNote(NOTE_C4, eightNote);
  playNote(NOTE_D4, dottedHalfNote);

  playNote(NOTE_A4, quarterNote);
  playNote(NOTE_B4, quarterNote);
  playNote(NOTE_C5, quarterNote);
  playNote(NOTE_B4, eightNote);
  playNote(NOTE_A4, eightNote);
  playNote(NOTE_B4, quarterNote);
  playNote(NOTE_G4, quarterNote);
  
  playNote(NOTE_D5, quarterNote);
  playNote(NOTE_C5, eightNote);
  playNote(NOTE_AS4, eightNote);
  playNote(NOTE_C5, quarterNote);
  playNote(NOTE_F4, quarterNote);

  playNote(NOTE_F5, quarterNote);
  playNote(NOTE_DS5, eightNote);
  playNote(NOTE_D5, eightNote);
  playNote(NOTE_D5, wholeNote + halfNote);

  playNote(NOTE_DS5, quarterNote);
  playNote(NOTE_CS5, eightNote);
  playNote(NOTE_C5, eightNote);
  playNote(NOTE_C5, wholeNote + halfNote);
  delay(dottedQuarterNote);

  playNote(NOTE_C5, halfNote);
  playNote(NOTE_F4, halfNote);
  playNote(NOTE_B4, dottedHalfNote);
  playNote(NOTE_C5, eightNote);
  playNote(NOTE_D5, eightNote);
  playNote(NOTE_C5, quarterNote);
  playNote(NOTE_A4, eightNote);
  playNote(NOTE_F4, eightNote);
  playNote(NOTE_B4, quarterNote);
  playNote(NOTE_C5, eightNote);
  playNote(NOTE_D5, eightNote);
  playNote(NOTE_C5, quarterNote);
  playNote(NOTE_G4, quarterNote);
  playNote(NOTE_C5, quarterNote);
  playNote(NOTE_G4, quarterNote);
  playNote(NOTE_G4, halfNote);
  playNote(NOTE_FS4, quarterNote);
  playNote(NOTE_E4, eightNote);
  playNote(NOTE_FS4, eightNote);
  playNote(NOTE_G4, twoWholeNotes);

  playNote(NOTE_F5, dottedQuarterNote);
  playNote(NOTE_F5, eightNote);
  playNote(NOTE_E5, quarterNote);
  playNote(NOTE_D5, eightNote);
  playNote(NOTE_C5, eightNote);
  playNote(NOTE_D5, dottedHalfNote);
  playNote(NOTE_G5, quarterNote);
  playNote(NOTE_F5, dottedQuarterNote);
  playNote(NOTE_F5, eightNote);
  playNote(NOTE_E5, quarterNote);
  playNote(NOTE_D5, eightNote);
  playNote(NOTE_C5, eightNote);
  playNote(NOTE_D5, halfNote);

  playNote(NOTE_A4, quarterNote);
  playNote(NOTE_B4, quarterNote);
  playNote(NOTE_C5, quarterNote);
  playNote(NOTE_B4, eightNote);
  playNote(NOTE_A4, eightNote);
  playNote(NOTE_B4, quarterNote);
  playNote(NOTE_G4, quarterNote);
  playNote(NOTE_D5, quarterNote);
  playNote(NOTE_C5, eightNote);
  playNote(NOTE_AS4, eightNote);
  playNote(NOTE_C5, quarterNote);
  playNote(NOTE_F4, quarterNote);

  playNote(NOTE_F4, halfNote);
  playNote(NOTE_G4, halfNote);
  playNote(NOTE_A4, halfNote);
  playNote(NOTE_B4, halfNote);
  playNote(NOTE_G4, halfNote);
  playNote(NOTE_C4, halfNote);
  playNote(NOTE_FS4, halfNote);
  playNote(NOTE_G4, eightNote);
  playNote(NOTE_A4, eightNote);
  playNote(NOTE_G4, halfNote);
  playNote(NOTE_C4, halfNote);
  playNote(NOTE_E4, halfNote);
  playNote(NOTE_G4, halfNote);

  playNote(NOTE_G4, quarterNote);
  playNote(NOTE_G4, eightNote);
  playNote(NOTE_F4, eightNote);
  playNote(NOTE_G4, dottedHalfNote);
  playNote(NOTE_G4, eightNote);
  playNote(NOTE_G4, eightNote);
  playNote(NOTE_G4, quarterNote);
  playNote(NOTE_G4, quarterNote);
  playNote(NOTE_C5, wholeNote + eightNote);
  delay(eightNote);

  playNote(NOTE_C5, eightNote);
  playNote(NOTE_C5, eightNote);
  playNote(NOTE_C5, eightNote);
  playNote(NOTE_C5, eightNote);
}
 
void loop() {  }

void playNote(int note, float duration){
  tone(buzzerID, note, duration);
  delay(duration * scaler);
}
