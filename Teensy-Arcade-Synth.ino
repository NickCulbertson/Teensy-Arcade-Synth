// Notes
#define NOTE_C0 (16.35)
#define NOTE_CS0 (17.32)
#define NOTE_D0 (18.35)
#define NOTE_DS0 (19.45)
#define NOTE_E0 (20.60)
#define NOTE_F0 (21.83)
#define NOTE_FS0 (23.12)
#define NOTE_G0 (24.50)
#define NOTE_GS0 (25.96)
#define NOTE_A0 (27.50)
#define NOTE_AS0 (29.14)
#define NOTE_B0 (30.87)
#define NOTE_C1 (32.70)
#define NOTE_CS1 (34.65)
#define NOTE_D1 (36.71)
#define NOTE_DS1 (38.89)
#define NOTE_E1 (41.20)
#define NOTE_F1 (43.65)
#define NOTE_FS1 (46.25)
#define NOTE_G1 (49.00)
#define NOTE_GS1 (51.91)
#define NOTE_A1 (55.00)
#define NOTE_AS1 (58.27)
#define NOTE_B1 (61.74)
#define NOTE_C2 (65.41)
#define NOTE_CS2 (69.30)
#define NOTE_D2 (73.42)
#define NOTE_DS2 (77.78)
#define NOTE_E2 (82.41)
#define NOTE_F2 (87.31)
#define NOTE_FS2 (92.50)
#define NOTE_G2 (98.00)
#define NOTE_GS2 (103.83)
#define NOTE_A2 (110.00)
#define NOTE_AS2 (116.54)
#define NOTE_B2 (123.47)
#define NOTE_C3 (130.81)
#define NOTE_CS3 (138.59)
#define NOTE_D3 (146.83)
#define NOTE_DS3 (155.56)
#define NOTE_E3 (164.81)
#define NOTE_F3 (174.61)
#define NOTE_FS3 (185.00)
#define NOTE_G3 (196.00)
#define NOTE_GS3 (207.65)
#define NOTE_A3 (220.00)
#define NOTE_AS3 (233.08)
#define NOTE_B3 (246.94)
#define NOTE_C4 (261.63)
#define NOTE_CS4 (277.18)
#define NOTE_D4 (293.66)
#define NOTE_DS4 (311.13)
#define NOTE_E4 (329.63)
#define NOTE_F4 (349.23)
#define NOTE_FS4 (369.99)
#define NOTE_G4 (392.00)
#define NOTE_GS4 (415.30)
#define NOTE_A4 (440.00)
#define NOTE_AS4 (466.16)
#define NOTE_B4 (493.88)
#define NOTE_C5 (523.25)
#define NOTE_CS5 (554.37)
#define NOTE_D5 (587.33)
#define NOTE_DS5 (622.25)
#define NOTE_E5 (659.25)
#define NOTE_F5 (698.46)
#define NOTE_FS5 (739.99)
#define NOTE_G5 (783.99)
#define NOTE_GS5 (830.61)
#define NOTE_A5 (880.00)
#define NOTE_AS5 (932.33)
#define NOTE_B5 (987.77)
#define NOTE_C6 (1046.50)
#define NOTE_CS6 (1108.73)
#define NOTE_D6 (1174.66)
#define NOTE_DS6 (1244.51)
#define NOTE_E6 (1318.51)
#define NOTE_F6 (1396.91)
#define NOTE_FS6 (1479.98)
#define NOTE_G6 (1567.98)
#define NOTE_GS6 (1661.22)
#define NOTE_A6 (1760.00)
#define NOTE_AS6 (1864.66)
#define NOTE_B6 (1975.53)
#define NOTE_C7 (2093.00)
#define NOTE_CS7 (2217.46)
#define NOTE_D7 (2349.32)
#define NOTE_DS7 (2489.02)
#define NOTE_E7 (2637.02)
#define NOTE_F7 (2793.83)
#define NOTE_FS7 (2959.96)
#define NOTE_G7 (3135.96)
#define NOTE_GS7 (3322.44)
#define NOTE_A7 (3520.00)
#define NOTE_AS7 (3729.31)
#define NOTE_B7 (3951.07)
#define NOTE_C8 (4186.01)
#define NOTE_CS8 (4434.92)
#define NOTE_D8 (4698.63)
#define NOTE_DS8 (4978.03)
#define NOTE_E8 (5274.04)
#define NOTE_F8 (5587.65)
#define NOTE_FS8 (5919.91)
#define NOTE_G8 (6271.93)
#define NOTE_GS8 (6644.88)
#define NOTE_A8 (7040.00)
#define NOTE_AS8 (7458.62)
#define NOTE_B8 (7902.13)

#include <Bounce.h>
#include <LiquidCrystal_I2C.h>
#include <Encoder.h>
#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveform       waveform1[3];
AudioSynthWaveform       waveform2[3];
AudioSynthWaveform       waveform3[3];
AudioSynthWaveformDc     dc1[3];
AudioEffectEnvelope      envelopeFilter1[3];
AudioMixer4              mixer2[3];
AudioMixer4              mixer1[3];
AudioFilterLadder        ladder2[3];
AudioFilterLadder        ladder1[3];
AudioEffectEnvelope      envelope1[3];
AudioEffectEnvelope      envelope2[3];
AudioMixer4              mixerL;
AudioMixer4              mixerR;
AudioOutputI2S           i2s1;
AudioOutputUSB           usb1;

AudioConnection          patchCord1(waveform1[0], 0, mixer1[0], 0);
AudioConnection          patchCord2(waveform1[0], 0, mixer2[0], 0);
AudioConnection          patchCord3(waveform2[0], 0, mixer1[0], 1);
AudioConnection          patchCord4(waveform2[0], 0, mixer2[0], 1);
AudioConnection          patchCord5(waveform3[0], 0, mixer1[0], 2);
AudioConnection          patchCord6(waveform3[0], 0, mixer2[0], 2);
AudioConnection          patchCord7(dc1[0], envelopeFilter1[0]);
AudioConnection          patchCord8(envelopeFilter1[0], 0, ladder1[0], 1);
AudioConnection          patchCord9(envelopeFilter1[0], 0, ladder2[0], 1);
AudioConnection          patchCord10(mixer2[0], 0, ladder2[0], 0);
AudioConnection          patchCord11(mixer1[0], 0, ladder1[0], 0);
AudioConnection          patchCord12(ladder2[0], envelope2[0]);
AudioConnection          patchCord13(ladder1[0], envelope1[0]);
AudioConnection          patchCord14(envelope1[0], 0, mixerL, 0);
AudioConnection          patchCord15(envelope2[0], 0, mixerR, 0);

AudioConnection          patchCord16(waveform1[1], 0, mixer1[1], 0);
AudioConnection          patchCord17(waveform1[1], 0, mixer2[1], 0);
AudioConnection          patchCord18(waveform2[1], 0, mixer1[1], 1);
AudioConnection          patchCord19(waveform2[1], 0, mixer2[1], 1);
AudioConnection          patchCord20(waveform3[1], 0, mixer1[1], 2);
AudioConnection          patchCord21(waveform3[1], 0, mixer2[1], 2);
AudioConnection          patchCord22(dc1[1], envelopeFilter1[1]);
AudioConnection          patchCord23(envelopeFilter1[1], 0, ladder1[1], 1);
AudioConnection          patchCord24(envelopeFilter1[1], 0, ladder2[1], 1);
AudioConnection          patchCord25(mixer2[1], 0, ladder2[1], 0);
AudioConnection          patchCord26(mixer1[1], 0, ladder1[1], 0);
AudioConnection          patchCord27(ladder2[1], envelope2[1]);
AudioConnection          patchCord28(ladder1[1], envelope1[1]);
AudioConnection          patchCord29(envelope1[1], 0, mixerL, 1);
AudioConnection          patchCord30(envelope2[1], 0, mixerR, 1);

AudioConnection          patchCord31(waveform1[2], 0, mixer1[2], 0);
AudioConnection          patchCord32(waveform1[2], 0, mixer2[2], 0);
AudioConnection          patchCord33(waveform2[2], 0, mixer1[2], 1);
AudioConnection          patchCord34(waveform2[2], 0, mixer2[2], 1);
AudioConnection          patchCord35(waveform3[2], 0, mixer1[2], 2);
AudioConnection          patchCord36(waveform3[2], 0, mixer2[2], 2);
AudioConnection          patchCord37(dc1[2], envelopeFilter1[2]);
AudioConnection          patchCord38(envelopeFilter1[2], 0, ladder1[2], 1);
AudioConnection          patchCord39(envelopeFilter1[2], 0, ladder2[2], 1);
AudioConnection          patchCord40(mixer2[2], 0, ladder2[2], 0);
AudioConnection          patchCord41(mixer1[2], 0, ladder1[2], 0);
AudioConnection          patchCord42(ladder2[2], envelope2[2]);
AudioConnection          patchCord43(ladder1[2], envelope1[2]);
AudioConnection          patchCord44(envelope1[2], 0, mixerL, 2);
AudioConnection          patchCord45(envelope2[2], 0, mixerR, 2);

AudioConnection          patchCord125(mixerL, 0, i2s1, 0);
AudioConnection          patchCord126(mixerR, 0, i2s1, 1);
AudioConnection          patchCord127(mixerL, 0, usb1, 0);
AudioConnection          patchCord128(mixerR, 0, usb1, 1);

AudioControlSGTL5000     sgt15000_1;
// GUItool: end automatically generated code

enum MenuState {
    PARENT_MENU,
    PRESETS,
    OSC_1,
    OSC_2,
    OSC_3,
    ENVELOPES,
    AMP_A,
    AMP_D,
    AMP_S,
    AMP_R,
    FLTR_A,
    FLTR_D,
    FLTR_S,
    FLTR_R,
    FILTER,
    OCTAVE,
    TRANSPOSE,
    CUTOFF,
    RESONANCE,
    FILTER_AMOUNT,
    WAVEFORMS,
    VOLUME,
    SEMITONES,
    DETUNE,
    PAN,
    SCALE
};

MenuState currentMenuState = PARENT_MENU;

LiquidCrystal_I2C lcd(0x27,20,4);

float myFreq = 80;
int voices = 3;
float freqValue = 1000;
float resValue =  0.1;
float octValue =  2.0;
bool notePlay1 = false;
bool noteInterupt = false;
bool notePlay2 = false;
bool notePlay3 = false;
int octave = 4;
int transpose = 0;
int scale = 0;
int menuIndex = 0;
float gainValue = 2.0;

int cents[3] = {0, 0, 0};
int semitones[3] = {0, 0, 0};
int pan[3] = {0, 0, 0};
int volume[3] = {100, 100, 100};

int attackAmp[3] = {100, 100, 100};
int decayAmp[3] = {100, 100, 100};
float sustainAmp[3] = {1, 1, 1};
int releaseAmp[3] = {100, 100, 100};

int attackFilter[3] = {100, 100, 100};
int decayFilter[3] = {100, 100, 100};
float sustainFilter[3] = {1, 1, 1};
int releaseFilter[3] = {100, 100, 100};

int cutoff[3] = {1000,1000,1000};
float resonance[3] = {2.0,2.0,2.0};
float filterAmount[3] = {2.0, 2.0, 2.0};

int waveforms[3] = {WAVEFORM_SAWTOOTH, WAVEFORM_SAWTOOTH, WAVEFORM_SAWTOOTH};
int waveformsArray[5] = {WAVEFORM_SAWTOOTH, WAVEFORM_PULSE, WAVEFORM_SQUARE, WAVEFORM_TRIANGLE, WAVEFORM_SINE};
float pulseWidth[3] = {0.25, 0.25, 0.25};

int noteArray[8];
int notePlaying = 0;
int presetSelected = 0;

Bounce button1 = Bounce(0, 15);
Bounce button2 = Bounce(1, 15);
Bounce button3 = Bounce(2, 15);
Bounce button4 = Bounce(3, 15);
Bounce button5 = Bounce(4, 15);
Bounce button6 = Bounce(5, 15);
Bounce button7 = Bounce(9, 15);
Bounce button8 = Bounce(22, 15);
Bounce button14 = Bounce(14, 15);
Encoder knob(16, 17);

const unsigned long debounceDelay = 50;
const unsigned long doubleTapWindow = 300;

int buttonState = LOW;
int lastButtonState = LOW;
unsigned long lastDebounceTime = 0; 
unsigned long lastTapTime = 0; 

bool tapDetected = false;
bool doubleTapDetected = false;

int currentOsc = 1;

float notesArray[108] = {NOTE_C0, NOTE_CS0, NOTE_D0, NOTE_DS0, NOTE_E0, NOTE_F0, NOTE_FS0, NOTE_G0, NOTE_GS0, NOTE_A0, NOTE_AS0, NOTE_B0,
    NOTE_C1, NOTE_CS1, NOTE_D1, NOTE_DS1, NOTE_E1, NOTE_F1, NOTE_FS1, NOTE_G1, NOTE_GS1, NOTE_A1, NOTE_AS1, NOTE_B1,
    NOTE_C2, NOTE_CS2, NOTE_D2, NOTE_DS2, NOTE_E2, NOTE_F2, NOTE_FS2, NOTE_G2, NOTE_GS2, NOTE_A2, NOTE_AS2, NOTE_B2,
    NOTE_C3, NOTE_CS3, NOTE_D3, NOTE_DS3, NOTE_E3, NOTE_F3, NOTE_FS3, NOTE_G3, NOTE_GS3, NOTE_A3, NOTE_AS3, NOTE_B3,
    NOTE_C4, NOTE_CS4, NOTE_D4, NOTE_DS4, NOTE_E4, NOTE_F4, NOTE_FS4, NOTE_G4, NOTE_GS4, NOTE_A4, NOTE_AS4, NOTE_B4,
    NOTE_C5, NOTE_CS5, NOTE_D5, NOTE_DS5, NOTE_E5, NOTE_F5, NOTE_FS5, NOTE_G5, NOTE_GS5, NOTE_A5, NOTE_AS5, NOTE_B5,
    NOTE_C6, NOTE_CS6, NOTE_D6, NOTE_DS6, NOTE_E6, NOTE_F6, NOTE_FS6, NOTE_G6, NOTE_GS6, NOTE_A6, NOTE_AS6, NOTE_B6,
    NOTE_C7, NOTE_CS7, NOTE_D7, NOTE_DS7, NOTE_E7, NOTE_F7, NOTE_FS7, NOTE_G7, NOTE_GS7, NOTE_A7, NOTE_AS7, NOTE_B7,
    NOTE_C8, NOTE_CS8, NOTE_D8, NOTE_DS8, NOTE_E8, NOTE_F8, NOTE_FS8, NOTE_G8, NOTE_GS8, NOTE_A8, NOTE_AS8, NOTE_B8};

void setup() {
    Serial.begin(9600);
    AudioMemory(150);
    lcd.init();
    lcd.backlight();
    presetSelect();
    updateMenu();
    sgt15000_1.enable();
    sgt15000_1.volume(1);
    for (int i = 0; i < 3; i++) {
        dc1[i].amplitude(1.0);
    }
    pinMode(0, INPUT_PULLUP);
    pinMode(1, INPUT_PULLUP);
    pinMode(2, INPUT_PULLUP);
    pinMode(3, INPUT_PULLUP);
    pinMode(4, INPUT_PULLUP);
    pinMode(5, INPUT_PULLUP);
    pinMode(9, INPUT_PULLUP);
    pinMode(22, INPUT_PULLUP);
    pinMode(14, INPUT_PULLUP);
}

void presetSelect() {
    if (menuIndex < 0) {
        menuIndex = 9;
    }
    if (menuIndex > 9) {
        menuIndex = 0;
    }
    presetSelected = menuIndex;
    if (menuIndex == 0) {
        // Bass
        octave =  2.0;

        cents[0] = 5;
        cents[1] = -5;
        cents[2] = 0;
        
        semitones[0] = 0;
        semitones[1] = 0;
        semitones[2] = -12;
        
        pan[0] = -100;
        pan[1] = 100;
        pan[2] = 0;
        
        volume[0] = 100;
        volume[1] = 100;
        volume[2] = 100;
        
        attackAmp[0] = 0;
        attackAmp[1] = 0;
        attackAmp[2] = 0;
        decayAmp[0] = 400;
        decayAmp[1] = 400;
        decayAmp[2] = 400;
        sustainAmp[0] = 0.0;
        sustainAmp[1] = 0.0;
        sustainAmp[2] = 0.0;
        releaseAmp[0] = 10;
        releaseAmp[1] = 10;
        releaseAmp[2] = 10;
        
        attackFilter[0] = 0;
        attackFilter[1] = 0;
        attackFilter[2] = 0;
        decayFilter[0] = 250;
        decayFilter[1] = 250;
        decayFilter[2] = 250;
        sustainFilter[0] = 0.0;
        sustainFilter[1] = 0.0;
        sustainFilter[2] = 0.0;
        releaseFilter[0] = 10;
        releaseFilter[1] = 10;
        releaseFilter[2] = 10;
        
        cutoff[0] = 1000;
        cutoff[1] = 1000;
        cutoff[2] = 1000;
        resonance[0] = 0.2;
        resonance[1] = 0.2;
        resonance[2] = 0.2;
        filterAmount[0] = 3.0;
        filterAmount[1] = 3.0;
        filterAmount[2] = 3.0;
        
        waveforms[0] = 0;
        waveforms[1] = 0;
        waveforms[2] = 1;
    } else if (menuIndex == 1) {
        // Keys
        octave =  4.0;
        
        cents[0] = 2;
        cents[1] = -2;
        cents[2] = 0;
        
        semitones[0] = 0;
        semitones[1] = 0;
        semitones[2] = 12;
        
        pan[0] = -100;
        pan[1] = 100;
        pan[2] = 0;
        
        volume[0] = 100;
        volume[1] = 100;
        volume[2] = 100;
        
        attackAmp[0] = 0;
        attackAmp[1] = 0;
        attackAmp[2] = 0;
        decayAmp[0] = 2500;
        decayAmp[1] = 2500;
        decayAmp[2] = 2500;
        sustainAmp[0] = 0;
        sustainAmp[1] = 0;
        sustainAmp[2] = 0;
        releaseAmp[0] = 300;
        releaseAmp[1] = 300;
        releaseAmp[2] = 300;
        
        attackFilter[0] = 0;
        attackFilter[1] = 0;
        attackFilter[2] = 0;
        decayFilter[0] = 2500;
        decayFilter[1] = 2500;
        decayFilter[2] = 2500;
        sustainFilter[0] = 0;
        sustainFilter[1] = 0;
        sustainFilter[2] = 0;
        releaseFilter[0] = 300;
        releaseFilter[1] = 300;
        releaseFilter[2] = 300;
        
        cutoff[0] = 1000;
        cutoff[1] = 1000;
        cutoff[2] = 1000;
        resonance[0] = 0.2;
        resonance[1] = 0.2;
        resonance[2] = 0.2;
        filterAmount[0] = 3.0;
        filterAmount[1] = 3.0;
        filterAmount[2] = 3.0;
        
        waveforms[0] = 0;
        waveforms[1] = 0;
        waveforms[2] = 0;
    } else if (menuIndex == 2) {
        // Pad
        octave =  4.0;
        
        cents[0] = 15;
        cents[1] = -15;
        cents[2] = 0;
        
        semitones[0] = 0;
        semitones[1] = 0;
        semitones[2] = 0;
        
        pan[0] = -100;
        pan[1] = 100;
        pan[2] = 0;
        
        volume[0] = 100;
        volume[1] = 100;
        volume[2] = 0;
        
        attackAmp[0] = 1500;
        attackAmp[1] = 1500;
        attackAmp[2] = 1500;
        decayAmp[0] = 6000;
        decayAmp[1] = 6000;
        decayAmp[2] = 6000;
        sustainAmp[0] = 0.2;
        sustainAmp[1] = 0.2;
        sustainAmp[2] = 0.2;
        releaseAmp[0] = 1500;
        releaseAmp[1] = 1500;
        releaseAmp[2] = 1500;
        
        attackFilter[0] = 1500;
        attackFilter[1] = 1500;
        attackFilter[2] = 1500;
        decayFilter[0] = 6000;
        decayFilter[1] = 6000;
        decayFilter[2] = 6000;
        sustainFilter[0] = 0.2;
        sustainFilter[1] = 0.2;
        sustainFilter[2] = 0.2;
        releaseFilter[0] = 1500;
        releaseFilter[1] = 1500;
        releaseFilter[2] = 1500;
        
        cutoff[0] = 1000;
        cutoff[1] = 1000;
        cutoff[2] = 1000;
        resonance[0] = 0.5;
        resonance[1] = 0.5;
        resonance[2] = 0.5;
        filterAmount[0] = 2.0;
        filterAmount[1] = 2.0;
        filterAmount[2] = 2.0;
        
        waveforms[0] = 4;
        waveforms[1] = 4;
        waveforms[2] = 4;
    } else if (menuIndex == 3) {
        // Lead
        octave =  5.0;
        
        cents[0] = 10;
        cents[1] = -10;
        cents[2] = 0;
        
        semitones[0] = 0;
        semitones[1] = 0;
        semitones[2] = 0;
        
        pan[0] = -100;
        pan[1] = 100;
        pan[2] = 0;
        
        volume[0] = 100;
        volume[1] = 100;
        volume[2] = 100;
        
        attackAmp[0] = 0;
        attackAmp[1] = 0;
        attackAmp[2] = 0;
        decayAmp[0] = 0;
        decayAmp[1] = 0;
        decayAmp[2] = 0;
        sustainAmp[0] = 1.0;
        sustainAmp[1] = 1.0;
        sustainAmp[2] = 1.0;
        releaseAmp[0] = 2;
        releaseAmp[1] = 2;
        releaseAmp[2] = 2;
        
        attackFilter[0] = 0;
        attackFilter[1] = 0;
        attackFilter[2] = 0;
        decayFilter[0] = 0;
        decayFilter[1] = 0;
        decayFilter[2] = 0;
        sustainFilter[0] = 1.0;
        sustainFilter[1] = 1.0;
        sustainFilter[2] = 1.0;
        releaseFilter[0] = 2;
        releaseFilter[1] = 2;
        releaseFilter[2] = 2;
        
        cutoff[0] = 1000;
        cutoff[1] = 1000;
        cutoff[2] = 1000;
        resonance[0] = 0.2;
        resonance[1] = 0.2;
        resonance[2] = 0.2;
        filterAmount[0] = 2.5;
        filterAmount[1] = 2.5;
        filterAmount[2] = 2.5;
        
        waveforms[0] = 0;
        waveforms[1] = 0;
        waveforms[2] = 0;
    } else if (menuIndex == 4) {
        // Arp
        octave =  4.0;
        
        cents[0] = 0;
        cents[1] = 0;
        cents[2] = 0;
        
        semitones[0] = 0;
        semitones[1] = 0;
        semitones[2] = 0;
        
        pan[0] = 0;
        pan[1] = 0;
        pan[2] = 0;
        
        volume[0] = 100;
        volume[1] = 0;
        volume[2] = 0;
        
        attackAmp[0] = 0;
        attackAmp[1] = 0;
        attackAmp[2] = 0;
        decayAmp[0] = 250;
        decayAmp[1] = 250;
        decayAmp[2] = 250;
        sustainAmp[0] = 0;
        sustainAmp[1] = 0;
        sustainAmp[2] = 0;
        releaseAmp[0] = 250;
        releaseAmp[1] = 250;
        releaseAmp[2] = 250;
        
        attackFilter[0] = 0;
        attackFilter[1] = 0;
        attackFilter[2] = 0;
        decayFilter[0] = 250;
        decayFilter[1] = 250;
        decayFilter[2] = 250;
        sustainFilter[0] = 0;
        sustainFilter[1] = 0;
        sustainFilter[2] = 0;
        releaseFilter[0] = 250;
        releaseFilter[1] = 250;
        releaseFilter[2] = 250;
        
        cutoff[0] = 1000;
        cutoff[1] = 1000;
        cutoff[2] = 1000;
        resonance[0] = 0.2;
        resonance[1] = 0.2;
        resonance[2] = 0.2;
        filterAmount[0] = 3.0;
        filterAmount[1] = 3.0;
        filterAmount[2] = 3.0;
        
        waveforms[0] = 2;
        waveforms[1] = 2;
        waveforms[2] = 2;
    } else if (menuIndex == 5) {
        // Brass
        octave =  4.0;
        
        cents[0] = -4;
        cents[1] = 4;
        cents[2] = 0;
        
        semitones[0] = 0;
        semitones[1] = 0;
        semitones[2] = 0;
        
        pan[0] = -100;
        pan[1] = 100;
        pan[2] = 0;
        
        volume[0] = 100;
        volume[1] = 100;
        volume[2] = 100;
        
        attackAmp[0] = 0;
        attackAmp[1] = 0;
        attackAmp[2] = 0;
        decayAmp[0] = 2500;
        decayAmp[1] = 2500;
        decayAmp[2] = 2500;
        sustainAmp[0] = 0.8;
        sustainAmp[1] = 0.8;
        sustainAmp[2] = 0.8;
        releaseAmp[0] = 250;
        releaseAmp[1] = 250;
        releaseAmp[2] = 250;
        
        attackFilter[0] = 100;
        attackFilter[1] = 100;
        attackFilter[2] = 100;
        decayFilter[0] = 2500;
        decayFilter[1] = 2500;
        decayFilter[2] = 2500;
        sustainFilter[0] = 0.8;
        sustainFilter[1] = 0.8;
        sustainFilter[2] = 0.8;
        releaseFilter[0] = 250;
        releaseFilter[1] = 250;
        releaseFilter[2] = 250;
        
        cutoff[0] = 1000;
        cutoff[1] = 1000;
        cutoff[2] = 1000;
        resonance[0] = 0.2;
        resonance[1] = 0.2;
        resonance[2] = 0.2;
        filterAmount[0] = 2.0;
        filterAmount[1] = 2.0;
        filterAmount[2] = 2.0;
        
        waveforms[0] = 0;
        waveforms[1] = 0;
        waveforms[2] = 0;
    } else if (menuIndex == 6) {
        // Organ
        octave =  5.0;
        
        cents[0] = 0;
        cents[1] = 0;
        cents[2] = 0;
        
        semitones[0] = 0;
        semitones[1] = -12;
        semitones[2] = 7;
        
        pan[0] = 0;
        pan[1] = 0;
        pan[2] = 0;
        
        volume[0] = 100;
        volume[1] = 100;
        volume[2] = 100;
        
        attackAmp[0] = 0;
        attackAmp[1] = 0;
        attackAmp[2] = 0;
        decayAmp[0] = 100;
        decayAmp[1] = 100;
        decayAmp[2] = 100;
        sustainAmp[0] = 0.6;
        sustainAmp[1] = 0.6;
        sustainAmp[2] = 0.6;
        releaseAmp[0] = 100;
        releaseAmp[1] = 100;
        releaseAmp[2] = 100;
        
        attackFilter[0] = 0;
        attackFilter[1] = 0;
        attackFilter[2] = 0;
        decayFilter[0] = 100;
        decayFilter[1] = 100;
        decayFilter[2] = 100;
        sustainFilter[0] = 0.6;
        sustainFilter[1] = 0.6;
        sustainFilter[2] = 0.6;
        releaseFilter[0] = 100;
        releaseFilter[1] = 100;
        releaseFilter[2] = 100;
        
        cutoff[0] = 1000;
        cutoff[1] = 1000;
        cutoff[2] = 1000;
        resonance[0] = 0.5;
        resonance[1] = 0.5;
        resonance[2] = 0.5;
        filterAmount[0] = 2.0;
        filterAmount[1] = 2.0;
        filterAmount[2] = 2.0;
        
        waveforms[0] = 4;
        waveforms[1] = 4;
        waveforms[2] = 4;
    } else if (menuIndex == 7) {
        // Flute
        octave =  5.0;
        
        cents[0] = -1;
        cents[1] = 1;
        cents[2] = 0;
        
        semitones[0] = 0;
        semitones[1] = 0;
        semitones[2] = 12;
        
        pan[0] = -100;
        pan[1] = 100;
        pan[2] = 0;
        
        volume[0] = 100;
        volume[1] = 100;
        volume[2] = 10;
        
        attackAmp[0] = 500;
        attackAmp[1] = 500;
        attackAmp[2] = 500;
        decayAmp[0] = 0;
        decayAmp[1] = 0;
        decayAmp[2] = 0;
        sustainAmp[0] = 1.0;
        sustainAmp[1] = 1.0;
        sustainAmp[2] = 1.0;
        releaseAmp[0] = 400;
        releaseAmp[1] = 400;
        releaseAmp[2] = 400;
        
        attackFilter[0] = 500;
        attackFilter[1] = 500;
        attackFilter[2] = 500;
        decayFilter[0] = 0;
        decayFilter[1] = 0;
        decayFilter[2] = 0;
        sustainFilter[0] = 1.0;
        sustainFilter[1] = 1.0;
        sustainFilter[2] = 1.0;
        releaseFilter[0] = 500;
        releaseFilter[1] = 500;
        releaseFilter[2] = 500;
        
        cutoff[0] = 1000;
        cutoff[1] = 1000;
        cutoff[2] = 1000;
        resonance[0] = 0.5;
        resonance[1] = 0.5;
        resonance[2] = 0.5;
        filterAmount[0] = 2.6;
        filterAmount[1] = 2.6;
        filterAmount[2] = 2.6;
        
        waveforms[0] = 3;
        waveforms[1] = 3;
        waveforms[2] = 4;
    } else if (menuIndex == 8) {
        // Chiptune
        octave =  4.0;
        
        cents[0] = 0;
        cents[1] = 0;
        cents[2] = 0;

        semitones[0] = 0;
        semitones[1] = 0;
        semitones[2] = 12;

        pan[0] = -100;
        pan[1] = 100;
        pan[2] = 0;

        volume[0] = 100;
        volume[1] = 100;
        volume[2] = 10;

        attackAmp[0] = 0;
        attackAmp[1] = 0;
        attackAmp[2] = 0;
        decayAmp[0] = 0;
        decayAmp[1] = 0;
        decayAmp[2] = 0;
        sustainAmp[0] = 1.0;
        sustainAmp[1] = 1.0;
        sustainAmp[2] = 1.0;
        releaseAmp[0] = 100;
        releaseAmp[1] = 100;
        releaseAmp[2] = 100;

        attackFilter[0] = 0;
        attackFilter[1] = 0;
        attackFilter[2] = 0;
        decayFilter[0] = 0;
        decayFilter[1] = 0;
        decayFilter[2] = 0;
        sustainFilter[0] = 1.0;
        sustainFilter[1] = 1.0;
        sustainFilter[2] = 1.0;
        releaseFilter[0] = 100;
        releaseFilter[1] = 100;
        releaseFilter[2] = 100;

        cutoff[0] = 2000;
        cutoff[1] = 2000;
        cutoff[2] = 2000;
        resonance[0] = 0.0;
        resonance[1] = 0.0;
        resonance[2] = 0.0;
        filterAmount[0] = 2.5;
        filterAmount[1] = 2.5;
        filterAmount[2] = 2.5;

        waveforms[0] = 1;
        waveforms[1] = 1;
        waveforms[2] = 1;
    } else if (menuIndex == 9) {
        // Wow
        octave =  4.0;
        cents[0] = 5;
        cents[1] = -5;
        cents[2] = 0;

        semitones[0] = 7;
        semitones[1] = 0;
        semitones[2] = -12;

        pan[0] = -50;
        pan[1] = 50;
        pan[2] = 0;

        volume[0] = 100;
        volume[1] = 100;
        volume[2] = 100;

        attackAmp[0] = 400;
        attackAmp[1] = 400;
        attackAmp[2] = 400;
        decayAmp[0] = 4000;
        decayAmp[1] = 4000;
        decayAmp[2] = 4000;
        sustainAmp[0] = 0.8;
        sustainAmp[1] = 0.8;
        sustainAmp[2] = 0.8;
        releaseAmp[0] = 10;
        releaseAmp[1] = 10;
        releaseAmp[2] = 10;

        attackFilter[0] = 800;
        attackFilter[1] = 800;
        attackFilter[2] = 800;
        decayFilter[0] = 6000;
        decayFilter[1] = 6000;
        decayFilter[2] = 6000;
        sustainFilter[0] = 0.2;
        sustainFilter[1] = 0.2;
        sustainFilter[2] = 0.2;
        releaseFilter[0] = 10;
        releaseFilter[1] = 10;
        releaseFilter[2] = 10;

        cutoff[0] = 1000;
        cutoff[1] = 1000;
        cutoff[2] = 1000;
        resonance[0] = 0.8;
        resonance[1] = 0.8;
        resonance[2] = 0.8;
        filterAmount[0] = 1.5;
        filterAmount[1] = 1.5;
        filterAmount[2] = 1.5;

        waveforms[0] = 0;
        waveforms[1] = 0;
        waveforms[2] = 0;
    }
    updateVals();
    presetChange();
}

void presetChange() {
    if (menuIndex < 0) {
        menuIndex = 9;
    }
    
    if (menuIndex > 9) {
        menuIndex = 0;
    }
    
    // lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Presets                 ");
    lcd.setCursor(0,1);
    
    if (menuIndex == 0) {
        if (presetSelected == 0) {
            lcd.print("1. Bass      [X]");
        } else {
            lcd.print("1. Bass      [ ]");
        }
        
    } else if (menuIndex == 1) {
        if (presetSelected == 1) {
            lcd.print("2. Keys      [X]");
        } else {
            lcd.print("2. Keys      [ ]");
        }
    } else if (menuIndex == 2) {
        if (presetSelected == 2) {
            lcd.print("3. Pad       [X]");
        } else {
            lcd.print("3. Pad       [ ]");
        }
    } else if (menuIndex == 3) {
        if (presetSelected == 3) {
            lcd.print("4. Lead      [X]");
        } else {
            lcd.print("4. Lead      [ ]");
        }
    } else if (menuIndex == 4) {
        if (presetSelected == 4) {
            lcd.print("5. Arp       [X]");
        } else {
            lcd.print("5. Arp       [ ]");
        }
    } else if (menuIndex == 5) {
        if (presetSelected == 5) {
            lcd.print("6. Brass     [X]");
        } else {
            lcd.print("6. Brass     [ ]");
        }
    } else if (menuIndex == 6) {
        if (presetSelected == 6) {
            lcd.print("7. Organ     [X]");
        } else {
            lcd.print("7. Organ     [ ]");
        }
    } else if (menuIndex == 7) {
        if (presetSelected == 7) {
            lcd.print("8. Flute     [X]");
        } else {
            lcd.print("8. Flute     [ ]");
        }
    } else if (menuIndex == 8) {
        if (presetSelected == 8) {
            lcd.print("9. Chiptune  [X]");
        } else {
            lcd.print("9. Chiptune  [ ]");
        }
    } else if (menuIndex == 9) {
        if (presetSelected == 9) {
            lcd.print("10. Wow      [X]");
        } else {
            lcd.print("10. Wow      [ ]");
        }
    }
}

void updateVals() {
    for (int i = 0; i < 3; i++) {
        envelope1[i].attack(attackAmp[i]);
        envelope1[i].decay(decayAmp[i]);
        envelope1[i].sustain(sustainAmp[i]);
        envelope1[i].release(releaseAmp[i]);
        envelope2[i].attack(attackAmp[i]);
        envelope2[i].decay(decayAmp[i]);
        envelope2[i].sustain(sustainAmp[i]);
        envelope2[i].release(releaseAmp[i]);
        envelopeFilter1[i].attack(attackFilter[i]);
        envelopeFilter1[i].decay(decayFilter[i]);
        envelopeFilter1[i].sustain(sustainFilter[i]);
        envelopeFilter1[i].release(releaseFilter[i]);
        if(waveforms[0]==0) {
            waveform1[i].begin(waveformsArray[0]);
        } else if(waveforms[0]==1) {
            waveform1[i].begin(waveformsArray[1]);
        } else if(waveforms[0]==2) {
            waveform1[i].begin(waveformsArray[2]);
        } else if(waveforms[0]==3) {
            waveform1[i].begin(waveformsArray[3]);
        } else if(waveforms[0]==4) {
            waveform1[i].begin(waveformsArray[4]);
        }
        waveform1[i].amplitude(1.0);
        waveform1[i].pulseWidth(pulseWidth[0]);
        if(waveforms[1]==0) {
            waveform2[i].begin(waveformsArray[0]);
        } else if(waveforms[1]==1) {
            waveform2[i].begin(waveformsArray[1]);
        } else if(waveforms[1]==2) {
            waveform2[i].begin(waveformsArray[2]);
        } else if(waveforms[1]==3) {
            waveform2[i].begin(waveformsArray[3]);
        } else if(waveforms[1]==4) {
            waveform2[i].begin(waveformsArray[4]);
        }
        waveform2[i].amplitude(1.0);
        waveform2[i].pulseWidth(pulseWidth[1]);
        if(waveforms[2]==0) {
            waveform3[i].begin(waveformsArray[0]);
        } else if(waveforms[2]==1) {
            waveform3[i].begin(waveformsArray[1]);
        } else if(waveforms[2]==2) {
            waveform3[i].begin(waveformsArray[2]);
        } else if(waveforms[2]==3) {
            waveform3[i].begin(waveformsArray[3]);
        } else if(waveforms[2]==4) {
            waveform3[i].begin(waveformsArray[4]);
        }
        waveform3[i].amplitude(1.0);
        waveform3[i].pulseWidth(pulseWidth[2]);
        ladder1[i].frequency(cutoff[i]);
        ladder1[i].octaveControl(filterAmount[i]);
        ladder1[i].resonance(resonance[i]);
        ladder2[i].frequency(cutoff[i]);
        ladder2[i].octaveControl(filterAmount[i]);
        ladder2[i].resonance(resonance[i]);
        mixer1[i].gain(0, max(0, (-pan[0]+100.0) * 0.005) * (volume[0]/100.0) * 0.33);
        mixer1[i].gain(1, max(0, (-pan[1]+100.0) * 0.005) * (volume[1]/100.0) * 0.33);
        mixer1[i].gain(2, max(0, (-pan[2]+100.0) * 0.005) * (volume[2]/100.0) * 0.33);
        mixer2[i].gain(0, max(0, (pan[0]+100.0) * 0.005) * (volume[0]/100.0) * 0.33);
        mixer2[i].gain(1, max(0, (pan[1]+100.0) * 0.005) * (volume[1]/100.0) * 0.33);
        mixer2[i].gain(2, max(0, (pan[2]+100.0) * 0.005) * (volume[2]/100.0) * 0.33);
    }
}

void menuChange() {
    if (menuIndex < 0) {
        menuIndex = 8;
    }
    if (menuIndex > 8) {
        menuIndex = 0;
    }
    lcd.setCursor(0,0);
    lcd.print("Menu            ");
    lcd.setCursor(0,1);
    if (menuIndex == 0) {
        lcd.print("Presets            ");
    } else if (menuIndex == 1) {
        lcd.print("Osc 1                 ");
    } else if (menuIndex == 2) {
        lcd.print("Osc 2                    ");
    } else if (menuIndex == 3) {
        lcd.print("Osc 3                  ");
    } else if (menuIndex == 4) {
        lcd.print("Envelopes                ");
    } else if (menuIndex == 5) {
        lcd.print("Filter                ");
    } else if (menuIndex == 6) {
        lcd.print("Octave         ");
        lcd.print(octave);
    } else if (menuIndex == 7) {
        if (transpose < -9) {
            lcd.print("Transpose    ");
        } else if (transpose > 9 || transpose < 0) {
            lcd.print("Transpose     ");
        } else {
            lcd.print("Transpose      ");
        }
        lcd.print(transpose);
    } else if (menuIndex == 8) {
        if (scale == 0) {
            lcd.print("Scale      Major");
        } else {
            lcd.print("Scale      Minor");
        }
    }
}

void playSound(int note) {
    stopSound(note);
    myFreq = notesArray[note];
    notePlaying += 1;
    if (notePlaying >= voices) {
        notePlaying = 0;
    }
    noteArray[notePlaying] = note;
    
    //Play Notes with intial pitch, semitones, detune, and random drift offset
    waveform1[notePlaying].frequency(notesArray[note + semitones[0]] * pow(2, cents[0] / 1200.0) * pow(2, random(-2, 3) / 1200.0));
    waveform2[notePlaying].frequency(notesArray[note + semitones[1]] * pow(2, cents[1] / 1200.0) * pow(2, random(-2, 3) / 1200.0));
    waveform3[notePlaying].frequency(notesArray[note + semitones[2]] * pow(2, cents[2] / 1200.0) * pow(2, random(-2, 3) / 1200.0));
    envelope1[notePlaying].noteOn();
    envelope2[notePlaying].noteOn();
    envelopeFilter1[notePlaying].noteOn();
}

void stopSound(int note) {
    for (int num = 0; num < voices; num++) {
        if (noteArray[num] == note) {
            envelope1[num].noteOff();
            envelope2[num].noteOff();
            envelopeFilter1[num].noteOff();
            noteArray[num] = 0;
        }
    }
}

long oldKnobVal  = 0;
void backMenuAction() {
    switch (currentMenuState) {
        case PARENT_MENU:
        currentMenuState = PARENT_MENU;
        break;
        case PRESETS:
        currentMenuState = PARENT_MENU;
        break;
        case OCTAVE:
        currentMenuState = PARENT_MENU;
        break;
        case TRANSPOSE:
        currentMenuState = PARENT_MENU;
        break;
        case OSC_1:
        currentMenuState = PARENT_MENU;
        break;
        case OSC_2:
        currentMenuState = PARENT_MENU;
        break;
        case OSC_3:
        currentMenuState = PARENT_MENU;
        break;
        case ENVELOPES:
        currentMenuState = PARENT_MENU;
        break;
        case AMP_A:
        currentMenuState = ENVELOPES;
        break;
        case AMP_D:
        currentMenuState = ENVELOPES;
        break;
        case AMP_S:
        currentMenuState = ENVELOPES;
        break;
        case AMP_R:
        currentMenuState = ENVELOPES;
        break;
        case FLTR_A:
        currentMenuState = ENVELOPES;
        break;
        case FLTR_D:
        currentMenuState = ENVELOPES;
        break;
        case FLTR_S:
        currentMenuState = ENVELOPES;
        break;
        case FLTR_R:
        currentMenuState = ENVELOPES;
        break;
        case FILTER:
        currentMenuState = PARENT_MENU;
        break;
        case CUTOFF:
        currentMenuState = FILTER;
        break;
        case RESONANCE:
        currentMenuState = FILTER;
        break;
        case FILTER_AMOUNT:
        currentMenuState = FILTER;
        break;
        case WAVEFORMS:
        if (currentOsc == 1){
            currentMenuState = OSC_1;
        } else if (currentOsc == 2){
            currentMenuState = OSC_2;
        } else if (currentOsc == 3){
            currentMenuState = OSC_3;
        }
        break;
        case VOLUME:
        if (currentOsc == 1){
            currentMenuState = OSC_1;
        } else if (currentOsc == 2){
            currentMenuState = OSC_2;
        } else if (currentOsc == 3){
            currentMenuState = OSC_3;
        }
        break;
        case SEMITONES:
        if (currentOsc == 1){
            currentMenuState = OSC_1;
        } else if (currentOsc == 2){
            currentMenuState = OSC_2;
        } else if (currentOsc == 3){
            currentMenuState = OSC_3;
        }
        break;
        case DETUNE:
        if (currentOsc == 1){
            currentMenuState = OSC_1;
        } else if (currentOsc == 2){
            currentMenuState = OSC_2;
        } else if (currentOsc == 3){
            currentMenuState = OSC_3;
        }
        break;
        case PAN:
        if (currentOsc == 1){
            currentMenuState = OSC_1;
        } else if (currentOsc == 2){
            currentMenuState = OSC_2;
        } else if (currentOsc == 3){
            currentMenuState = OSC_3;
        }
        break;
        case SCALE:
        currentMenuState = PARENT_MENU;
        break;
    }
    updateMenu();
}

void updateMenu() {
    lcd.setCursor(0,0);
    switch (currentMenuState) {
        case PARENT_MENU:
          lcd.print("Menu                    ");
          lcd.setCursor(0,1);
          lcd.print("Presets                  ");
          menuIndex = 0;
        break;
        case PRESETS:
          lcd.print("Presets            ");
          lcd.setCursor(0,1);
          if (presetSelected == 0) {
              lcd.print("1. Bass      [X]");
          } else {
              lcd.print("1. Bass      [ ]");
          }
          menuIndex = 0;
        break;
        case OSC_1:
          lcd.print("Osc 1            ");
          lcd.setCursor(0,1);
          lcd.print("Waveform     ");
          currentOsc = 1;
          if (waveformsArray[waveforms[currentOsc-1]] == waveformsArray[0]) {
              lcd.print("Saw");
          } else if (waveformsArray[waveforms[currentOsc-1]] == waveformsArray[1]) {
              lcd.print("Pls");
          } else if (waveformsArray[waveforms[currentOsc-1]] == waveformsArray[2]) {
              lcd.print("Sqr");
          } else if (waveformsArray[waveforms[currentOsc-1]] == waveformsArray[3]) {
              lcd.print("Tri");
          } else if (waveformsArray[waveforms[currentOsc-1]] == waveformsArray[4]) {
              lcd.print("Sin");
          }
          menuIndex = 0;
        break;
        case OSC_2:
          lcd.print("Osc 2             ");
          lcd.setCursor(0,1);
          lcd.print("Waveform     ");
          currentOsc = 2;
          if (waveformsArray[waveforms[currentOsc-1]] == waveformsArray[0]) {
              lcd.print("Saw");
          } else if (waveformsArray[waveforms[currentOsc-1]] == waveformsArray[1]) {
              lcd.print("Pls");
          } else if (waveformsArray[waveforms[currentOsc-1]] == waveformsArray[2]) {
              lcd.print("Sqr");
          } else if (waveformsArray[waveforms[currentOsc-1]] == waveformsArray[3]) {
              lcd.print("Tri");
          } else if (waveformsArray[waveforms[currentOsc-1]] == waveformsArray[4]) {
              lcd.print("Sin");
          }
          menuIndex = 0;
        break;
        case OSC_3:
          lcd.print("Osc 3             ");
          lcd.setCursor(0,1);
          lcd.print("Waveform     ");
          currentOsc = 3;
          if (waveformsArray[waveforms[currentOsc-1]] == waveformsArray[0]) {
              lcd.print("Saw");
          } else if (waveformsArray[waveforms[currentOsc-1]] == waveformsArray[1]) {
              lcd.print("Pls");
          } else if (waveformsArray[waveforms[currentOsc-1]] == waveformsArray[2]) {
              lcd.print("Sqr");
          } else if (waveformsArray[waveforms[currentOsc-1]] == waveformsArray[3]) {
              lcd.print("Tri");
          } else if (waveformsArray[waveforms[currentOsc-1]] == waveformsArray[4]) {
              lcd.print("Sin");
          }
          menuIndex = 0;
        break;
        case ENVELOPES:
          lcd.print("Envelopes               ");
          lcd.setCursor(0,1);
          if (attackAmp[0] > 999) {
              lcd.print("Amp A       ");
          } else if (attackAmp[0] > 99) {
              lcd.print("Amp A        ");
          } else if (attackAmp[0] > 9) {
              lcd.print("Amp A         ");
          } else {
              lcd.print("Amp A          ");
          }
          lcd.print(attackAmp[0]);
          menuIndex = 0;
        break;
        case AMP_A:
          lcd.print("Envelopes               ");
          lcd.setCursor(0,1);
          if (attackAmp[0] > 999) {
              lcd.print("Amp A     [");
          } else if (attackAmp[0] > 99) {
              lcd.print("Amp A      [");
          } else if (attackAmp[0] > 9) {
              lcd.print("Amp A       [");
          } else {
              lcd.print("Amp A        [");
          }
          lcd.print(attackAmp[0]);
          lcd.print("]");
        break;
        case AMP_D:
          lcd.print("Envelopes               ");
          lcd.setCursor(0,1);
          if (decayAmp[0] > 999) {
              lcd.print("Amp D     [");
          } else if (decayAmp[0] > 99) {
              lcd.print("Amp D      [");
          } else if (decayAmp[0] > 9) {
              lcd.print("Amp D       [");
          } else {
              lcd.print("Amp D        [");
          }
          lcd.print(decayAmp[0]);
          lcd.print("]");
        break;
        case AMP_S:
          lcd.print("Envelopes               ");
          lcd.setCursor(0,1);
          if (sustainAmp[0] > 999) {
              lcd.print("Amp S  [");
          } else if (sustainAmp[0] > 99) {
              lcd.print("Amp S   [");
          } else if (sustainAmp[0] > 9) {
              lcd.print("Amp S    [");
          } else {
              lcd.print("Amp S     [");
          }
          lcd.print(sustainAmp[0]);
          lcd.print("]");
        break;
        case AMP_R:
          lcd.print("Envelopes               ");
          lcd.setCursor(0,1);
          if (releaseAmp[0] > 999) {
              lcd.print("Amp R     [");
          } else if (releaseAmp[0] > 99) {
              lcd.print("Amp R      [");
          } else if (releaseAmp[0] > 9) {
              lcd.print("Amp R       [");
          } else {
              lcd.print("Amp R        [");
          }
          lcd.print(releaseAmp[0]);
          lcd.print("]");
        break;
        case FLTR_A:
          lcd.print("Envelopes               ");
          lcd.setCursor(0,1);
          if (attackFilter[0] > 999) {
              lcd.print("Fltr A     [");
          } else if (attackFilter[0] > 99) {
              lcd.print("Fltr A      [");
          } else if (attackFilter[0] > 9) {
              lcd.print("Fltr A       [");
          } else {
              lcd.print("Fltr A        [");
          }
          lcd.print(attackFilter[0]);
          lcd.print("]");
        break;
        case FLTR_D:
          lcd.print("Envelopes               ");
          lcd.setCursor(0,1);
          if (decayFilter[0] > 999) {
              lcd.print("Fltr D     [");
          } else if (decayFilter[0] > 99) {
              lcd.print("Fltr D      [");
          } else if (decayFilter[0] > 9) {
              lcd.print("Fltr D       [");
          } else {
              lcd.print("Fltr D        [");
          }
          lcd.print(decayFilter[0]);
          lcd.print("]");
        break;
        case FLTR_S:
          lcd.print("Envelopes               ");
          lcd.setCursor(0,1);
          if (sustainFilter[0] > 999) {
              lcd.print("Fltr S [");
          } else if (sustainFilter[0] > 99) {
              lcd.print("Fltr S  [");
          } else if (sustainFilter[0] > 9) {
              lcd.print("Fltr S   [");
          } else {
              lcd.print("Fltr S    [");
          }
          lcd.print(sustainFilter[0]);
          lcd.print("]");
        break;
        case FLTR_R:
          lcd.print("Envelopes               ");
          lcd.setCursor(0,1);
          if (releaseFilter[0] > 999) {
              lcd.print("Fltr R     [");
          } else if (releaseFilter[0] > 99) {
              lcd.print("Fltr R      [");
          } else if (releaseFilter[0] > 9) {
              lcd.print("Fltr R       [");
          } else {
              lcd.print("Fltr R        [");
          }
          lcd.print(releaseFilter[0]);
          lcd.print("]");
        break;
        case FILTER:
          lcd.print("Filter                 ");
          lcd.setCursor(0,1);
          if (cutoff[0] > 9999) {
          lcd.print("Cutoff     ");
          } else if (cutoff[0] > 999) {
          lcd.print("Cutoff      ");
          } else if (cutoff[0] > 99) {
          lcd.print("Cutoff       ");
          } else if (cutoff[0] > 9){
          lcd.print("Cutoff        ");
          } else {
          lcd.print("Cutoff         ");
          }
          lcd.print(cutoff[0]);
          menuIndex = 0;
        break;
        case CUTOFF:
          lcd.print("Filter               ");
          lcd.setCursor(0,1);
          if (cutoff[0] > 9999) {
          lcd.print("Cutoff   [");
          } else if (cutoff[0] > 999) {
          lcd.print("Cutoff    [");
          } else if (cutoff[0] > 99) {
          lcd.print("Cutoff     [");
          } else if (cutoff[0] > 9){
          lcd.print("Cutoff      [");
          } else {
          lcd.print("Cutoff       [");
          }
          lcd.print(cutoff[0]);
          lcd.print("]");
          // menuIndex = 0;
        break;
        case RESONANCE:
          lcd.print("Filter               ");
          lcd.setCursor(0,1);
          lcd.print("Resonance [");
          lcd.print(resonance[0]);
          lcd.print("]");
          // menuIndex = 0;
        break;
        case FILTER_AMOUNT:
          lcd.print("Filter               ");
          lcd.setCursor(0,1);
          lcd.print("Env Amount[");
          lcd.print(filterAmount[0]);
          lcd.print("]");
          // menuIndex = 0;
        break;
        case OCTAVE:
          lcd.print("Menu               ");
          lcd.setCursor(0,1);
          lcd.print("Octave       [");
          lcd.print(octave);
          lcd.print("]");
        break;
        case TRANSPOSE:
          lcd.print("Menu               ");
          lcd.setCursor(0,1);
          if (transpose < -9) {
              lcd.print("Transpose  [");
          } else if (transpose > 9 || transpose < 0) {
              lcd.print("Transpose   [");
          } else {
              lcd.print("Transpose    [");
          }
          lcd.print(transpose);
          lcd.print("]");
        break;
        case WAVEFORMS:
          lcd.print("Osc ");
          lcd.print(currentOsc);
          lcd.print("            ");
          lcd.setCursor(0,1);
          lcd.print("Waveform   [");
          if (waveformsArray[waveforms[currentOsc-1]] == waveformsArray[0]) {
              lcd.print("Saw");
          } else if (waveformsArray[waveforms[currentOsc-1]] == waveformsArray[1]) {
              lcd.print("Pls");
          } else if (waveformsArray[waveforms[currentOsc-1]] == waveformsArray[2]) {
              lcd.print("Sqr");
          } else if (waveformsArray[waveforms[currentOsc-1]] == waveformsArray[3]) {
              lcd.print("Tri");
          } else if (waveformsArray[waveforms[currentOsc-1]] == waveformsArray[4]) {
              lcd.print("Sin");
          }
          lcd.print("]");
          menuIndex = 0;
        break;
        case VOLUME:
          lcd.print("Osc ");
          lcd.print(currentOsc);
          lcd.print("            ");
          lcd.setCursor(0,1);
          if (volume[currentOsc-1] > 99) {
          lcd.print("Volume     [");
          } else if (volume[currentOsc-1] > 9) {
          lcd.print("Volume      [");
          } else {
          lcd.print("Volume       [");
          }
          lcd.print(volume[currentOsc-1]);
          lcd.print("]");
        break;
        case SEMITONES:
          lcd.print("Osc ");
          lcd.print(currentOsc);
          lcd.print("            ");
          lcd.setCursor(0,1);
          if (semitones[currentOsc-1] > 9) {
          lcd.print("Semitone    [");
          } else if (semitones[currentOsc-1] > -1) {
          lcd.print("Semitone     [");
          } else if (semitones[currentOsc-1] > -10) {
          lcd.print("Semitone    [");
          } else {
          lcd.print("Semitone   [");
          }
          lcd.print(semitones[currentOsc-1]);
          lcd.print("]");
        break;
        case DETUNE:
          lcd.print("Osc ");
          lcd.print(currentOsc);
          lcd.print("            ");
          lcd.setCursor(0,1);
          if (cents[currentOsc-1] > 99) {
          lcd.print("Detune     [");
          } else if (cents[currentOsc-1] > 9) {
          lcd.print("Detune      [");
          } else if (cents[currentOsc-1] > -1) {
          lcd.print("Detune       [");
          } else if (cents[currentOsc-1] > -10) {
          lcd.print("Detune      [");
          } else if (cents[currentOsc-1] > -100) {
          lcd.print("Detune     [");
          } else {
          lcd.print("Detune    [");
          }
          lcd.print(cents[currentOsc-1]);
          lcd.print("]");
        break;
        case PAN:
          lcd.print("Osc ");
          lcd.print(currentOsc);
          lcd.print("            ");
          lcd.setCursor(0,1);
          if (pan[currentOsc-1] > 99) {
          lcd.print("Pan        [");
          } else if (pan[currentOsc-1] > 9) {
          lcd.print("Pan         [");
          } else if (pan[currentOsc-1] > -1) {
          lcd.print("Pan          [");
          } else if (pan[currentOsc-1] > -10) {
          lcd.print("Pan         [");
          } else if (pan[currentOsc-1] > -100) {
          lcd.print("Pan        [");
          } else {
          lcd.print("Pan       [");
          }
          lcd.print(pan[currentOsc-1]);
          lcd.print("]");
        break;
        case SCALE:
          lcd.print("Menu               ");
          lcd.setCursor(0,1);
          if (scale == 0) {
            lcd.print("Scale    [Major]");
        } else {
            lcd.print("Scale    [Minor]");
        }
        break;
    }
}

void checkNotes() {
    button1.update();
    button2.update();
    button3.update();
    button4.update();
    button5.update();
    button6.update();
    button7.update();
    button8.update();
    
    if (button1.fallingEdge()) {
        playSound(12 * octave + transpose);
    } else if (button1.risingEdge()) {
        stopSound(12 * octave + transpose);
    }
    
    if (button2.fallingEdge()) {
        playSound(12 * octave + transpose + 2);
    } else if (button2.risingEdge()) {
        stopSound(12 * octave + transpose + 2);
    }
    
    if (scale == 0) {
    if (button3.fallingEdge()) {
        playSound(12 * octave + transpose + 4);
    } else if (button3.risingEdge()) {
        stopSound(12 * octave + transpose + 4);
    }
    } else {
      if (button3.fallingEdge()) {
        playSound(12 * octave + transpose + 3);
    } else if (button3.risingEdge()) {
        stopSound(12 * octave + transpose + 3);
    }
    }
    
    if (button4.fallingEdge()) {
        playSound(12 * octave + transpose + 5);
    } else if (button4.risingEdge()) {
        stopSound(12 * octave + transpose + 5);
    }
    
    if (button5.fallingEdge()) {
        playSound(12 * octave + transpose + 7);
    } else if (button5.risingEdge()) {
        stopSound(12 * octave + transpose + 7);
    }
    
    if (scale == 0) {
    if (button6.fallingEdge()) {
        playSound(12 * octave + transpose + 9);
    } else if (button6.risingEdge()) {
        stopSound(12 * octave + transpose + 9);
    }
    } else {
      if (button6.fallingEdge()) {
        playSound(12 * octave + transpose + 8);
    } else if (button6.risingEdge()) {
        stopSound(12 * octave + transpose + 8);
    }
    }
    
    if (scale == 0) {
    if (button7.fallingEdge()) {
        playSound(12 * octave + transpose + 11);
    } else if (button7.risingEdge()) {
        stopSound(12 * octave + transpose + 11);
    }
    } else {
      if (button7.fallingEdge()) {
        playSound(12 * octave + transpose + 10);
    } else if (button7.risingEdge()) {
        stopSound(12 * octave + transpose + 10);
    }
    }
    
    if (button8.fallingEdge()) {
        playSound(12 * octave + transpose + 12);
    } else if (button8.risingEdge()) {
        stopSound(12 * octave + transpose + 12);
    }
    
    // ENCODER EVENTS
    int reading = digitalRead(14);
    
    if (reading != lastButtonState) {
        lastDebounceTime = millis();
    }
    
    if ((millis() - lastDebounceTime) > debounceDelay) {
        if (reading != buttonState) {
            buttonState = reading;
            if (buttonState == LOW) {
                unsigned long timeSinceLastTap = millis() - lastTapTime;
                if (timeSinceLastTap > 0 && timeSinceLastTap < doubleTapWindow) {
                    doubleTapDetected = true;
                } else {
                    lastTapTime = millis();
                }
            }
        }
    }
    
    // Handle single tap
    if (!doubleTapDetected && (millis() - lastTapTime >= doubleTapWindow) && lastTapTime != 0) {
        if (currentMenuState == PARENT_MENU) {
            if (menuIndex == 0) {
                currentMenuState = PRESETS;
            } else if (menuIndex == 1) {
                currentMenuState = OSC_1;
            } else if (menuIndex == 2) {
                currentMenuState = OSC_2;
            } else if (menuIndex == 3) {
                currentMenuState = OSC_3;
            } else if (menuIndex == 4) {
                currentMenuState = ENVELOPES;
            } else if (menuIndex == 5) {
                currentMenuState = FILTER;
            } else if (menuIndex == 6) {
                currentMenuState = OCTAVE;
            } else if (menuIndex == 7) {
                currentMenuState = TRANSPOSE;
            } else if (menuIndex == 8) {
                currentMenuState = SCALE;
            }
            updateMenu();
        } else if (currentMenuState == ENVELOPES) {
              if (menuIndex == 0) {
                currentMenuState = AMP_A;
                updateMenu();
          } else if (menuIndex == 1) {
                currentMenuState = AMP_D;
                updateMenu();
          } else if (menuIndex == 2) {
                currentMenuState = AMP_S;
                updateMenu();
          } else if (menuIndex == 3) {
                currentMenuState = AMP_R;
                updateMenu();
          } else if (menuIndex == 4) {
                currentMenuState = FLTR_A;
                updateMenu();
          } else if (menuIndex == 5) {
                currentMenuState = FLTR_D;
                updateMenu();
          } else if (menuIndex == 6) {
                currentMenuState = FLTR_S;
                updateMenu();
          } else if (menuIndex == 7) {
                currentMenuState = FLTR_R;
                updateMenu();
          }
        } else if (currentMenuState == AMP_A || currentMenuState == AMP_D || currentMenuState == AMP_S || currentMenuState == AMP_R || currentMenuState == FLTR_A || currentMenuState == FLTR_D || currentMenuState == FLTR_S || currentMenuState == FLTR_R) {
            currentMenuState = ENVELOPES;
              updateMenu();
        } else if (currentMenuState == OCTAVE) {
            currentMenuState = PARENT_MENU;
            lcd.setCursor(0,0);
            lcd.print("Menu               ");
            lcd.setCursor(0,1);
            lcd.print("Octave         ");
            lcd.print(octave);
        } else if (currentMenuState == SCALE) {
            currentMenuState = PARENT_MENU;
            lcd.setCursor(0,0);
            lcd.print("Menu               ");
            lcd.setCursor(0,1);
            if (scale == 0) {
            lcd.print("Scale      Major");
        } else {
            lcd.print("Scale      Minor");
        }
        } else if (currentMenuState == TRANSPOSE) {
            currentMenuState = PARENT_MENU;
            lcd.setCursor(0,0);
            lcd.print("Menu                        ");
            lcd.setCursor(0,1);
            if (transpose < -9) {
                lcd.print("Transpose    ");
            } else if (transpose > 9 || transpose < 0) {
                lcd.print("Transpose     ");
            } else {
                lcd.print("Transpose      ");
            }
            lcd.print(transpose);
        } else if (currentMenuState == FILTER) {
            if (menuIndex == 0) {
                currentMenuState = CUTOFF;
                updateMenu();
            } else if (menuIndex == 1) {
                currentMenuState = RESONANCE;
                updateMenu();
            } else if (menuIndex == 2) {
                currentMenuState = FILTER_AMOUNT;
                updateMenu();
            }
        } else if (currentMenuState == CUTOFF) {
            currentMenuState = FILTER;
            lcd.setCursor(0,0);
            lcd.print("Filter               ");
            lcd.setCursor(0,1);
            if (cutoff[0] > 9999) {
        lcd.print("Cutoff     ");
        } else if (cutoff[0] > 999) {
        lcd.print("Cutoff      ");
        } else if (cutoff[0] > 99) {
        lcd.print("Cutoff       ");
        } else if (cutoff[0] > 9){
        lcd.print("Cutoff        ");
        } else {
        lcd.print("Cutoff         ");
        }
            lcd.print(cutoff[0]);
            menuIndex = 0;
        } else if (currentMenuState == RESONANCE) {
            currentMenuState = FILTER;
            lcd.setCursor(0,0);
            lcd.print("Filter               ");
            lcd.setCursor(0,1);
            lcd.print("Resonance    ");
            lcd.print(resonance[0]);
            menuIndex = 1;
        } else if (currentMenuState == FILTER_AMOUNT) {
            currentMenuState = FILTER;
            lcd.setCursor(0,0);
            lcd.print("Filter               ");
            lcd.setCursor(0,1);
            lcd.print("Env Amount   ");
            lcd.print(filterAmount[0]);
            menuIndex = 2;
        } else if (currentMenuState == OSC_1 || currentMenuState == OSC_2 || currentMenuState == OSC_3) {
            if (menuIndex == 0) {
                currentMenuState = WAVEFORMS;
                updateMenu();
            } else if (menuIndex == 1) {
                currentMenuState = VOLUME;
                updateMenu();
            } else if (menuIndex == 2) {
                currentMenuState = SEMITONES;
                updateMenu();
            } else if (menuIndex == 3) {
                currentMenuState = DETUNE;
                updateMenu();
            } else if (menuIndex == 4) {
                currentMenuState = PAN;
                updateMenu();
            }
        } else if (currentMenuState == WAVEFORMS || currentMenuState == VOLUME || currentMenuState == SEMITONES || currentMenuState == DETUNE || currentMenuState == PAN) {
            if (currentOsc == 1) {
                currentMenuState = OSC_1;
            } else if (currentOsc == 2) {
                currentMenuState = OSC_2;
            } else if (currentOsc == 3) {
                currentMenuState = OSC_3;
            }
            updateMenu();
            menuIndex = 0;
        } else {
            presetSelect();
        }
        lastTapTime = 0;
    }
    
    // Handle double tap
    if (doubleTapDetected) {
        Serial.println("Double tap detected");
        backMenuAction();
        doubleTapDetected = false;
        lastTapTime = 0;
    }
    lastButtonState = reading;
    
    // Handle Encoder Turn
    long newKnobVal;
    newKnobVal = knob.read();
    if (newKnobVal != oldKnobVal) {
        if (newKnobVal > oldKnobVal + 1) {
            next();
            oldKnobVal = newKnobVal;
            knob.write(oldKnobVal);
        } else if (newKnobVal < oldKnobVal - 1) {
            previous();
            oldKnobVal = newKnobVal;
            knob.write(oldKnobVal);
        }
    }
}

void next() {
    menuIndex += 1;
    updateKnob(true);
}

void previous() {
    menuIndex -= 1;
    updateKnob(false);
}

void updateKnob(bool next) {
    if (currentMenuState == PARENT_MENU) {
        menuChange();
    } else if (currentMenuState == PRESETS) {
        presetChange();
    } else if (currentMenuState == OSC_1) {
        oscChange(1);
    } else if (currentMenuState == OSC_2) {
        oscChange(2);
    } else if (currentMenuState == OSC_3) {
        oscChange(3);
    } else if (currentMenuState == WAVEFORMS) {
        if (next == true) {
            waveforms[currentOsc-1] =  min(4, waveforms[currentOsc-1]+1);
        } else {
            waveforms[currentOsc-1] =  max(0, waveforms[currentOsc-1]-1);
        }
        waveform1[0].begin(waveformsArray[waveforms[currentOsc-1]]);
        waveform1[1].begin(waveformsArray[waveforms[currentOsc-1]]);
        waveform1[2].begin(waveformsArray[waveforms[currentOsc-1]]);

        waveform2[0].begin(waveformsArray[waveforms[currentOsc-1]]);
        waveform2[1].begin(waveformsArray[waveforms[currentOsc-1]]);
        waveform2[2].begin(waveformsArray[waveforms[currentOsc-1]]);

        waveform3[0].begin(waveformsArray[waveforms[currentOsc-1]]);
        waveform3[1].begin(waveformsArray[waveforms[currentOsc-1]]);
        waveform3[2].begin(waveformsArray[waveforms[currentOsc-1]]);
                
        lcd.setCursor(0,0);
        lcd.print("Osc ");
        lcd.print(currentOsc);
        lcd.print("          ");
        lcd.setCursor(0,1);
        lcd.print("Waveform   [");
        if (waveformsArray[waveforms[currentOsc-1]] == waveformsArray[0]) {
            lcd.print("Saw");
        } else if (waveformsArray[waveforms[currentOsc-1]] == waveformsArray[1]) {
            lcd.print("Pls");
        } else if (waveformsArray[waveforms[currentOsc-1]] == waveformsArray[2]) {
            lcd.print("Sqr");
        } else if (waveformsArray[waveforms[currentOsc-1]] == waveformsArray[3]) {
            lcd.print("Tri");
        } else if (waveformsArray[waveforms[currentOsc-1]] == waveformsArray[4]) {
            lcd.print("Sin");
        }
        lcd.print("]");
    } else if (currentMenuState == VOLUME) {
        if (next == true) {
            volume[currentOsc-1] =  min(200,  volume[currentOsc-1]+10);
        } else {
            volume[currentOsc-1] =  max(0,  volume[currentOsc-1]-10);
        }
        for (int i = 0; i < 3; i++) {
            mixer1[i].gain(currentOsc-1, max(0, (-pan[currentOsc-1]+100.0) * 0.005) * (volume[currentOsc-1]/100.0) * 0.33);
            mixer2[i].gain(currentOsc-1, max(0, (pan[currentOsc-1]+100.0) * 0.005) * (volume[currentOsc-1]/100.0) * 0.33);
        }
        lcd.setCursor(0,0);
        lcd.print("Osc ");
        lcd.print(currentOsc);
        lcd.print("          ");
        lcd.setCursor(0,1);
        if (volume[currentOsc-1] > 99) {
        lcd.print("Volume     [");
        } else if (volume[currentOsc-1] > 9) {
        lcd.print("Volume      [");
        } else {
        lcd.print("Volume       [");
        }
        lcd.print(volume[currentOsc-1]);
        lcd.print("]");
    } else if (currentMenuState == SEMITONES) {
        if (next == true) {
            semitones[currentOsc-1] =  min(12,  semitones[currentOsc-1]+1);
        } else {
            semitones[currentOsc-1] =  max(-12,  semitones[currentOsc-1]-1);
        }
        lcd.setCursor(0,0);
        lcd.print("Osc ");
        lcd.print(currentOsc);
        lcd.print("          ");
        lcd.setCursor(0,1);
        if (semitones[currentOsc-1] > 9) {
        lcd.print("Semitone    [");
        } else if (semitones[currentOsc-1] > -1) {
        lcd.print("Semitone     [");
        } else if (semitones[currentOsc-1] > -10) {
        lcd.print("Semitone    [");
        } else {
        lcd.print("Semitone   [");
        }
        lcd.print(semitones[currentOsc-1]);
        lcd.print("]");
    } else if (currentMenuState == AMP_A) {
        if (next == true) {
            attackAmp[0] =  min(9000,  attackAmp[0] + 100);
            attackAmp[1] =  min(9000,  attackAmp[1] + 100);
            attackAmp[2] =  min(9000,  attackAmp[2] + 100);
        } else {
            attackAmp[0] =  max(0,  attackAmp[0] - 100);
            attackAmp[1] =  max(0,  attackAmp[1] - 100);
            attackAmp[2] =  max(0,  attackAmp[2] - 100);
        }
        for (int i = 0; i < 3; i++) {
            envelope1[i].attack(attackAmp[i]);
            envelope1[i].decay(decayAmp[i]);
            envelope1[i].sustain(sustainAmp[i]);
            envelope1[i].release(releaseAmp[i]);
            
            envelope2[i].attack(attackAmp[i]);
            envelope2[i].decay(decayAmp[i]);
            envelope2[i].sustain(sustainAmp[i]);
            envelope2[i].release(releaseAmp[i]);
            
            envelopeFilter1[i].attack(attackFilter[i]);
            envelopeFilter1[i].decay(decayFilter[i]);
            envelopeFilter1[i].sustain(sustainFilter[i]);
            envelopeFilter1[i].release(releaseFilter[i]);
        }
        lcd.setCursor(0,0);
        lcd.print("Envelopes               ");
        lcd.setCursor(0,1);
        if (attackAmp[0] > 999) {
            lcd.print("Amp A     [");
        } else if (attackAmp[0] > 99) {
            lcd.print("Amp A      [");
        } else if (attackAmp[0] > 9) {
            lcd.print("Amp A       [");
        } else {
            lcd.print("Amp A        [");
        }
        lcd.print(attackAmp[0]);
        lcd.print("]");
    } else if (currentMenuState == AMP_D) {
        if (next == true) {
            decayAmp[0] =  min(9000,  decayAmp[0] + 100);
            decayAmp[1] =  min(9000,  decayAmp[1] + 100);
            decayAmp[2] =  min(9000,  decayAmp[2] + 100);
        } else {
            decayAmp[0] =  max(0,  decayAmp[0] - 100);
            decayAmp[1] =  max(0,  decayAmp[1] - 100);
            decayAmp[2] =  max(0,  decayAmp[2] - 100);
        }
        for (int i = 0; i < 3; i++) {
            envelope1[i].attack(attackAmp[i]);
            envelope1[i].decay(decayAmp[i]);
            envelope1[i].sustain(sustainAmp[i]);
            envelope1[i].release(releaseAmp[i]);
            
            envelope2[i].attack(attackAmp[i]);
            envelope2[i].decay(decayAmp[i]);
            envelope2[i].sustain(sustainAmp[i]);
            envelope2[i].release(releaseAmp[i]);
            
            envelopeFilter1[i].attack(attackFilter[i]);
            envelopeFilter1[i].decay(decayFilter[i]);
            envelopeFilter1[i].sustain(sustainFilter[i]);
            envelopeFilter1[i].release(releaseFilter[i]);
        }
        lcd.setCursor(0,0);
        lcd.print("Envelopes               ");
        lcd.setCursor(0,1);
        if (decayAmp[0] > 999) {
            lcd.print("Amp D     [");
        } else if (decayAmp[0] > 99) {
            lcd.print("Amp D      [");
        } else if (decayAmp[0] > 9) {
            lcd.print("Amp D       [");
        } else {
            lcd.print("Amp D        [");
        }
        lcd.print(decayAmp[0]);
        lcd.print("]");
    } else if (currentMenuState == AMP_S) {
        if (next == true) {
            sustainAmp[0] =  min(1.0,  sustainAmp[0] + 0.1);
            sustainAmp[1] =  min(1.0,  sustainAmp[1] + 0.1);
            sustainAmp[2] =  min(1.0,  sustainAmp[2] + 0.1);
        } else {
            sustainAmp[0] =  max(0,  sustainAmp[0] - 0.1);
            sustainAmp[1] =  max(0,  sustainAmp[1] - 0.1);
            sustainAmp[2] =  max(0,  sustainAmp[2] - 0.1);
        }
        for (int i = 0; i < 3; i++) {
            envelope1[i].attack(attackAmp[i]);
            envelope1[i].decay(decayAmp[i]);
            envelope1[i].sustain(sustainAmp[i]);
            envelope1[i].release(releaseAmp[i]);
            
            envelope2[i].attack(attackAmp[i]);
            envelope2[i].decay(decayAmp[i]);
            envelope2[i].sustain(sustainAmp[i]);
            envelope2[i].release(releaseAmp[i]);
            
            envelopeFilter1[i].attack(attackFilter[i]);
            envelopeFilter1[i].decay(decayFilter[i]);
            envelopeFilter1[i].sustain(sustainFilter[i]);
            envelopeFilter1[i].release(releaseFilter[i]);
        }
        lcd.setCursor(0,0);
        lcd.print("Envelopes               ");
        lcd.setCursor(0,1);
        if (sustainAmp[0] > 999) {
            lcd.print("Amp S  [");
        } else if (sustainAmp[0] > 99) {
            lcd.print("Amp S   [");
        } else if (sustainAmp[0] > 9) {
            lcd.print("Amp S    [");
        } else {
            lcd.print("Amp S     [");
        }
        lcd.print(sustainAmp[0]);
        lcd.print("]");
    } else if (currentMenuState == AMP_R) {
        if (next == true) {
            releaseAmp[0] =  min(9000,  releaseAmp[0] + 100);
            releaseAmp[1] =  min(9000,  releaseAmp[1] + 100);
            releaseAmp[2] =  min(9000,  releaseAmp[2] + 100);
        } else {
            releaseAmp[0] =  max(0,  releaseAmp[0] - 100);
            releaseAmp[1] =  max(0,  releaseAmp[1] - 100);
            releaseAmp[2] =  max(0,  releaseAmp[2] - 100);
        }
        for (int i = 0; i < 3; i++) {
            envelope1[i].attack(attackAmp[i]);
            envelope1[i].decay(decayAmp[i]);
            envelope1[i].sustain(sustainAmp[i]);
            envelope1[i].release(releaseAmp[i]);
            
            envelope2[i].attack(attackAmp[i]);
            envelope2[i].decay(decayAmp[i]);
            envelope2[i].sustain(sustainAmp[i]);
            envelope2[i].release(releaseAmp[i]);
            
            envelopeFilter1[i].attack(attackFilter[i]);
            envelopeFilter1[i].decay(decayFilter[i]);
            envelopeFilter1[i].sustain(sustainFilter[i]);
            envelopeFilter1[i].release(releaseFilter[i]);
        }
        lcd.setCursor(0,0);
        lcd.print("Envelopes               ");
        lcd.setCursor(0,1);
        if (releaseAmp[0] > 999) {
            lcd.print("Amp R     [");
        } else if (releaseAmp[0] > 99) {
            lcd.print("Amp R      [");
        } else if (releaseAmp[0] > 9) {
            lcd.print("Amp R       [");
        } else {
            lcd.print("Amp R        [");
        }
        lcd.print(releaseAmp[0]);
        lcd.print("]");
    } else if (currentMenuState == FLTR_A) {
        if (next == true) {
            attackFilter[0] =  min(9000,  attackFilter[0] + 100);
            attackFilter[1] =  min(9000,  attackFilter[1] + 100);
            attackFilter[2] =  min(9000,  attackFilter[2] + 100);
        } else {
            attackFilter[0] =  max(0,  attackFilter[0] - 100);
            attackFilter[1] =  max(0,  attackFilter[1] - 100);
            attackFilter[2] =  max(0,  attackFilter[2] - 100);
        }
        for (int i = 0; i < 3; i++) {
            envelope1[i].attack(attackAmp[i]);
            envelope1[i].decay(decayAmp[i]);
            envelope1[i].sustain(sustainAmp[i]);
            envelope1[i].release(releaseAmp[i]);
            
            envelope2[i].attack(attackAmp[i]);
            envelope2[i].decay(decayAmp[i]);
            envelope2[i].sustain(sustainAmp[i]);
            envelope2[i].release(releaseAmp[i]);
            
            envelopeFilter1[i].attack(attackFilter[i]);
            envelopeFilter1[i].decay(decayFilter[i]);
            envelopeFilter1[i].sustain(sustainFilter[i]);
            envelopeFilter1[i].release(releaseFilter[i]);
        }
        lcd.setCursor(0,0);
        lcd.print("Envelopes               ");
        lcd.setCursor(0,1);
        if (attackFilter[0] > 999) {
            lcd.print("Fltr A    [");
        } else if (attackFilter[0] > 99) {
            lcd.print("Fltr A     [");
        } else if (attackFilter[0] > 9) {
            lcd.print("Fltr A      [");
        } else {
            lcd.print("Fltr A       [");
        }
        lcd.print(attackFilter[0]);
        lcd.print("]");
    } else if (currentMenuState == FLTR_D) {
        if (next == true) {
            decayFilter[0] =  min(9000,  decayFilter[0] + 100);
            decayFilter[1] =  min(9000,  decayFilter[1] + 100);
            decayFilter[2] =  min(9000,  decayFilter[2] + 100);
        } else {
            decayFilter[0] =  max(0,  decayFilter[0] - 100);
            decayFilter[1] =  max(0,  decayFilter[1] - 100);
            decayFilter[2] =  max(0,  decayFilter[2] - 100);
        }
        for (int i = 0; i < 3; i++) {
            envelope1[i].attack(attackAmp[i]);
            envelope1[i].decay(decayAmp[i]);
            envelope1[i].sustain(sustainAmp[i]);
            envelope1[i].release(releaseAmp[i]);
            
            envelope2[i].attack(attackAmp[i]);
            envelope2[i].decay(decayAmp[i]);
            envelope2[i].sustain(sustainAmp[i]);
            envelope2[i].release(releaseAmp[i]);
            
            envelopeFilter1[i].attack(attackFilter[i]);
            envelopeFilter1[i].decay(decayFilter[i]);
            envelopeFilter1[i].sustain(sustainFilter[i]);
            envelopeFilter1[i].release(releaseFilter[i]);
        }
        lcd.setCursor(0,0);
        lcd.print("Envelopes               ");
        lcd.setCursor(0,1);
        if (decayFilter[0] > 999) {
            lcd.print("Fltr D    [");
        } else if (decayFilter[0] > 99) {
            lcd.print("Fltr D     [");
        } else if (decayFilter[0] > 9) {
            lcd.print("Fltr D      [");
        } else {
            lcd.print("Fltr D       [");
        }
        lcd.print(decayFilter[0]);
        lcd.print("]");
    } else if (currentMenuState == FLTR_S) {
        if (next == true) {
            sustainFilter[0] =  min(1.0,  sustainFilter[0] + 0.1);
            sustainFilter[1] =  min(1.0,  sustainFilter[1] + 0.1);
            sustainFilter[2] =  min(1.0,  sustainFilter[2] + 0.1);
        } else {
            sustainFilter[0] =  max(0,  sustainFilter[0] - 0.1);
            sustainFilter[1] =  max(0,  sustainFilter[1] - 0.1);
            sustainFilter[2] =  max(0,  sustainFilter[2] - 0.1);
        }
        for (int i = 0; i < 3; i++) {
            envelope1[i].attack(attackAmp[i]);
            envelope1[i].decay(decayAmp[i]);
            envelope1[i].sustain(sustainAmp[i]);
            envelope1[i].release(releaseAmp[i]);
            
            envelope2[i].attack(attackAmp[i]);
            envelope2[i].decay(decayAmp[i]);
            envelope2[i].sustain(sustainAmp[i]);
            envelope2[i].release(releaseAmp[i]);
            
            envelopeFilter1[i].attack(attackFilter[i]);
            envelopeFilter1[i].decay(decayFilter[i]);
            envelopeFilter1[i].sustain(sustainFilter[i]);
            envelopeFilter1[i].release(releaseFilter[i]);
        }
        lcd.setCursor(0,0);
        lcd.print("Envelopes               ");
        lcd.setCursor(0,1);
        if (sustainFilter[0] > 999) {
            lcd.print("Fltr S [");
        } else if (sustainFilter[0] > 99) {
            lcd.print("Fltr S  [");
        } else if (sustainFilter[0] > 9) {
            lcd.print("Fltr S   [");
        } else {
            lcd.print("Fltr S    [");
        }
        lcd.print(sustainFilter[0]);
        lcd.print("]");
    } else if (currentMenuState == FLTR_R) {
        if (next == true) {
            releaseFilter[0] =  min(9000,  releaseFilter[0] + 100);
            releaseFilter[1] =  min(9000,  releaseFilter[1] + 100);
            releaseFilter[2] =  min(9000,  releaseFilter[2] + 100);
        } else {
            releaseFilter[0] =  max(0,  releaseFilter[0] - 100);
            releaseFilter[1] =  max(0,  releaseFilter[1] - 100);
            releaseFilter[2] =  max(0,  releaseFilter[2] - 100);
        }
        for (int i = 0; i < 3; i++) {
            envelope1[i].attack(attackAmp[i]);
            envelope1[i].decay(decayAmp[i]);
            envelope1[i].sustain(sustainAmp[i]);
            envelope1[i].release(releaseAmp[i]);
            
            envelope2[i].attack(attackAmp[i]);
            envelope2[i].decay(decayAmp[i]);
            envelope2[i].sustain(sustainAmp[i]);
            envelope2[i].release(releaseAmp[i]);
            
            envelopeFilter1[i].attack(attackFilter[i]);
            envelopeFilter1[i].decay(decayFilter[i]);
            envelopeFilter1[i].sustain(sustainFilter[i]);
            envelopeFilter1[i].release(releaseFilter[i]);
        }
        lcd.setCursor(0,0);
        lcd.print("Envelopes               ");
        lcd.setCursor(0,1);
        if (releaseFilter[0] > 999) {
            lcd.print("Fltr R    [");
        } else if (releaseFilter[0] > 99) {
            lcd.print("Fltr R     [");
        } else if (releaseFilter[0] > 9) {
            lcd.print("Fltr R      [");
        } else {
            lcd.print("Fltr R       [");
        }
        lcd.print(releaseFilter[0]);
        lcd.print("]");
    } else if (currentMenuState == DETUNE) {
        if (next == true) {
            cents[currentOsc-1] =  min(100,  cents[currentOsc-1]+1);
        } else {
            cents[currentOsc-1] =  max(-100,  cents[currentOsc-1]-1);
        }
        lcd.setCursor(0,0);
        lcd.print("Osc ");
        lcd.print(currentOsc);
        lcd.print("          ");
        lcd.setCursor(0,1);
        if (cents[currentOsc-1] > 99) {
        lcd.print("Detune     [");
        } else if (cents[currentOsc-1] > 9) {
        lcd.print("Detune      [");
        } else if (cents[currentOsc-1] > -1) {
        lcd.print("Detune       [");
        } else if (cents[currentOsc-1] > -10) {
        lcd.print("Detune      [");
        } else if (cents[currentOsc-1] > -100) {
        lcd.print("Detune     [");
        } else {
        lcd.print("Detune    [");
        }
        lcd.print(cents[currentOsc-1]);
        lcd.print("]");
    } else if (currentMenuState == PAN) {
        if (next == true) {
            pan[currentOsc-1] =  min(100,  pan[currentOsc-1]+10);
        } else {
            pan[currentOsc-1] =  max(-100,  pan[currentOsc-1]-10);
        }
        for (int i = 0; i < 3; i++) {
            mixer1[i].gain(currentOsc-1, max(0, (-pan[currentOsc-1]+100.0) * 0.005) * (volume[currentOsc-1]/100.0) * 0.33);
            mixer2[i].gain(currentOsc-1, max(0, (pan[currentOsc-1]+100.0) * 0.005) * (volume[currentOsc-1]/100.0) * 0.33);
        }
        lcd.setCursor(0,0);
        lcd.print("Osc ");
        lcd.print(currentOsc);
        lcd.print("          ");
        lcd.setCursor(0,1);
        if (pan[currentOsc-1] > 99) {
        lcd.print("Pan        [");
        } else if (pan[currentOsc-1] > 9) {
        lcd.print("Pan         [");
        } else if (pan[currentOsc-1] > -1) {
        lcd.print("Pan          [");
        } else if (pan[currentOsc-1] > -10) {
        lcd.print("Pan         [");
        } else if (pan[currentOsc-1] > -100) {
        lcd.print("Pan        [");
        } else {
        lcd.print("Pan       [");
        }
        lcd.print(pan[currentOsc-1]);
        lcd.print("]");
    } else if (currentMenuState == ENVELOPES) {
        envelopesChange();
    } else if (currentMenuState == FILTER) {
        filterChange();
    } else if (currentMenuState == CUTOFF) {
        if (next == true) {
            cutoff[0] =  min(10000,  cutoff[0]+100);
            cutoff[1] =  min(10000,  cutoff[1]+100);
            cutoff[2] =  min(10000,  cutoff[2]+100);
        } else {
            cutoff[0] =  max(0,  cutoff[0]-100);
            cutoff[1] =  max(0,  cutoff[1]-100);
            cutoff[2] =  max(0,  cutoff[2]-100);
        }
        for (int i = 0; i < 3; i++) {
            ladder1[i].frequency(cutoff[i]);
            ladder1[i].octaveControl(filterAmount[i]);
            ladder1[i].resonance(resonance[i]);
            ladder2[i].frequency(cutoff[i]);
            ladder2[i].octaveControl(filterAmount[i]);
            ladder2[i].resonance(resonance[i]);
        }
        lcd.setCursor(0,0);
        lcd.print("Filter               ");
        lcd.setCursor(0,1);
        if (cutoff[0] > 9999) {
        lcd.print("Cutoff   [");
        } else if (cutoff[0] > 999) {
        lcd.print("Cutoff    [");
        } else if (cutoff[0] > 99) {
        lcd.print("Cutoff     [");
        } else if (cutoff[0] > 9){
        lcd.print("Cutoff      [");
        } else {
        lcd.print("Cutoff       [");
        }
        lcd.print(cutoff[0]);
        lcd.print("]");
    } else if (currentMenuState == RESONANCE) {
        if (next == true) {
            resonance[0] =  min(3.0,  resonance[0]+0.1);
            resonance[1] =  min(3.0,  resonance[1]+0.1);
            resonance[2] =  min(3.0,  resonance[2]+0.1);
        } else {
            resonance[0] =  max(0,  resonance[0]-0.1);
            resonance[1] =  max(0,  resonance[1]-0.1);
            resonance[2] =  max(0,  resonance[2]-0.1);
        }
        for (int i = 0; i < 3; i++) {
            ladder1[i].frequency(cutoff[i]);
            ladder1[i].octaveControl(filterAmount[i]);
            ladder1[i].resonance(resonance[i]);
            ladder2[i].frequency(cutoff[i]);
            ladder2[i].octaveControl(filterAmount[i]);
            ladder2[i].resonance(resonance[i]);
        }
        lcd.setCursor(0,0);
        lcd.print("Filter               ");
        lcd.setCursor(0,1);
        lcd.print("Resonance [");
        lcd.print(resonance[0]);
        lcd.print("]");
    } else if (currentMenuState == FILTER_AMOUNT) {
        if (next == true) {
            filterAmount[0] =  min(5.0,  filterAmount[0]+0.1);
            filterAmount[1] =  min(5.0,  filterAmount[1]+0.1);
            filterAmount[2] =  min(5.0,  filterAmount[2]+0.1);
        } else {
            filterAmount[0] =  max(0,  filterAmount[0]-0.1);
            filterAmount[1] =  max(0,  filterAmount[1]-0.1);
            filterAmount[2] =  max(0,  filterAmount[2]-0.1);
        }
        for (int i = 0; i < 3; i++) {
            ladder1[i].frequency(cutoff[i]);
            ladder1[i].octaveControl(filterAmount[i]);
            ladder1[i].resonance(resonance[i]);
            ladder2[i].frequency(cutoff[i]);
            ladder2[i].octaveControl(filterAmount[i]);
            ladder2[i].resonance(resonance[i]);
        }
        lcd.setCursor(0,0);
        lcd.print("Filter               ");
        lcd.setCursor(0,1);
        lcd.print("Env Amount[");
        lcd.print(filterAmount[0]);
        lcd.print("]");
    } else if (currentMenuState == OCTAVE) {
        if (next == true) {
            octave =  min(7,  octave+1);
        }else {
            octave =  max(0,  octave-1);
        }
        lcd.setCursor(0,0);
        lcd.print("Menu               ");
        lcd.setCursor(0,1);
        lcd.print("Octave       [");
        lcd.print(octave);
        lcd.print("]");
    } else if (currentMenuState == TRANSPOSE) {
        if (next == true) {
            transpose =  min(12,  transpose+1);
            
        } else {
            transpose =  max(-12,  transpose-1);
        }
        lcd.setCursor(0,0);
        lcd.print("Menu               ");
        lcd.setCursor(0,1);
        if (transpose < -9) {
            lcd.print("Transpose  [");
        } else if (transpose > 9 || transpose < 0) {
            lcd.print("Transpose   [");
        } else {
            lcd.print("Transpose    [");
        }
        lcd.print(transpose);
        lcd.print("]");
    } else if (currentMenuState == SCALE) {
        if (scale == 0) {
            scale = 1;
        } else {
            scale = 0;
        }
        lcd.setCursor(0,0);
        lcd.print("Menu               ");
        lcd.setCursor(0,1);
        if (scale == 0) {
            lcd.print("Scale    [Major]");
        } else {
            lcd.print("Scale    [Minor]");
        }
    }
}

void oscChange(int osc) {
    if (menuIndex < 0) {
        menuIndex = 4;
    }
    if (menuIndex > 4) {
        menuIndex = 0;
    }
    lcd.setCursor(0,0);
    if (menuIndex == 0) {
        lcd.print("Osc ");
        lcd.print(osc);
        lcd.print("       ");
        lcd.setCursor(0,1);
        lcd.print("Waveform     ");
        if (waveformsArray[waveforms[currentOsc-1]] == waveformsArray[0]) {
            lcd.print("Saw");
        } else if (waveformsArray[waveforms[currentOsc-1]] == waveformsArray[1]) {
            lcd.print("Pls");
        } else if (waveformsArray[waveforms[currentOsc-1]] == waveformsArray[2]) {
            lcd.print("Sqr");
        } else if (waveformsArray[waveforms[currentOsc-1]] == waveformsArray[3]) {
            lcd.print("Tri");
        } else if (waveformsArray[waveforms[currentOsc-1]] == waveformsArray[4]) {
            lcd.print("Sin");
        }
    } else if (menuIndex == 1) {
        lcd.print("Osc ");
        lcd.print(osc);
        lcd.print("       ");
        lcd.setCursor(0,1);
        if (volume[currentOsc-1] > 99) {
        lcd.print("Volume       ");
        } else if (volume[currentOsc-1] > 9) {
        lcd.print("Volume        ");
        } else {
        lcd.print("Volume         ");
        }
        lcd.print(volume[currentOsc-1]);
    } else if (menuIndex == 2) {
        lcd.print("Osc ");
        lcd.print(osc);
        lcd.print("       ");
        lcd.setCursor(0,1);
        if (semitones[currentOsc-1] > 9) {
        lcd.print("Semitone      ");
        } else if (semitones[currentOsc-1] > -1) {
        lcd.print("Semitone       ");
        } else if (semitones[currentOsc-1] > -10) {
        lcd.print("Semitone      ");
        } else {
        lcd.print("Semitone     ");
        }
        lcd.print(semitones[currentOsc-1]);
    } else if (menuIndex == 3) {
        lcd.print("Osc ");
        lcd.print(osc);
        lcd.print("       ");
        lcd.setCursor(0,1);
        if (cents[currentOsc-1] > 99) {
        lcd.print("Detune       ");
        } else if (cents[currentOsc-1] > 9) {
        lcd.print("Detune        ");
        } else if (cents[currentOsc-1] > -1) {
        lcd.print("Detune         ");
        } else if (cents[currentOsc-1] > -10) {
        lcd.print("Detune        ");
        } else if (cents[currentOsc-1] > -100) {
        lcd.print("Detune       ");
        } else {
        lcd.print("Detune      ");
        }
        lcd.print(cents[currentOsc-1]);
    } else if (menuIndex == 4) {
        lcd.print("Osc ");
        lcd.print(osc);
        lcd.print("       ");
        lcd.setCursor(0,1);
        if (pan[currentOsc-1] > 99) {
        lcd.print("Pan          ");
        } else if (pan[currentOsc-1] > 9) {
        lcd.print("Pan           ");
        } else if (pan[currentOsc-1] > -1) {
        lcd.print("Pan            ");
        } else if (pan[currentOsc-1] > -10) {
        lcd.print("Pan           ");
        } else if (pan[currentOsc-1] > -100) {
        lcd.print("Pan          ");
        } else {
        lcd.print("Pan         ");
        }
        lcd.print(pan[currentOsc-1]);
    }
}

void envelopesChange() {
    if (menuIndex < 0) {
        menuIndex = 7;
    } else if (menuIndex > 7) {
        menuIndex = 0;
    }
    lcd.setCursor(0,0);
    if (menuIndex == 0) {
        lcd.print("Envelopes               ");
        lcd.setCursor(0,1);
        if (attackAmp[0] > 999) {
            lcd.print("Amp A       ");
        } else if (attackAmp[0] > 99) {
            lcd.print("Amp A        ");
        } else if (attackAmp[0] > 9) {
            lcd.print("Amp A         ");
        } else {
            lcd.print("Amp A          ");
        }
        lcd.print(attackAmp[0]);
    } else if (menuIndex == 1) {
        lcd.print("Envelopes               ");
        lcd.setCursor(0,1);
        if (decayAmp[0] > 999) {
            lcd.print("Amp D       ");
        } else if (decayAmp[0] > 99) {
            lcd.print("Amp D        ");
        } else if (decayAmp[0] > 9) {
            lcd.print("Amp D         ");
        } else {
            lcd.print("Amp D          ");
        }
        lcd.print(decayAmp[0]);
    } else if (menuIndex == 2) {
        lcd.print("Envelopes               ");
        lcd.setCursor(0,1);
        lcd.print("Amp S        ");
        lcd.print(sustainAmp[0]);
    } else if (menuIndex == 3) {
        lcd.print("Envelopes               ");
        lcd.setCursor(0,1);
        if (releaseAmp[0] > 999) {
            lcd.print("Amp R       ");
        } else if (releaseAmp[0] > 99) {
            lcd.print("Amp R        ");
        } else if (releaseAmp[0] > 9) {
            lcd.print("Amp R         ");
        } else {
            lcd.print("Amp R          ");
        }
        lcd.print(releaseAmp[0]);
    } else if (menuIndex == 4) {
        lcd.print("Envelopes               ");
        lcd.setCursor(0,1);
        if (attackFilter[0] > 999) {
            lcd.print("Fltr A      ");
        } else if (attackFilter[0] > 99) {
            lcd.print("Fltr A       ");
        } else if (attackFilter[0] > 9) {
            lcd.print("Fltr A       ");
        } else {
            lcd.print("Fltr A         ");
        }
        lcd.print(attackFilter[0]);
    } else if (menuIndex == 5) {
        lcd.print("Envelopes               ");
        lcd.setCursor(0,1);
        if (decayFilter[0] > 999) {
            lcd.print("Fltr D      ");
        } else if (decayFilter[0] > 99) {
            lcd.print("Fltr D       ");
        } else if (decayFilter[0] > 9) {
            lcd.print("Fltr D        ");
        } else {
            lcd.print("Fltr D         ");
        }
        lcd.print(decayFilter[0]);
    } else if (menuIndex == 6) {
        lcd.print("Envelopes               ");
        lcd.setCursor(0,1);
        lcd.print("Fltr S       ");
        lcd.print(sustainFilter[0]);
    } else if (menuIndex == 7) {
        lcd.print("Envelopes               ");
        lcd.setCursor(0,1);
        if (releaseFilter[0] > 999) {
            lcd.print("Fltr R      ");
        } else if (releaseFilter[0] > 99) {
            lcd.print("Fltr R       ");
        } else if (releaseFilter[0] > 9) {
            lcd.print("Fltr R        ");
        } else {
            lcd.print("Fltr R         ");
        }
        lcd.print(releaseFilter[0]);
    }
}

void filterChange() {
    if (menuIndex < 0) {
        menuIndex = 2;
    }
    if (menuIndex > 2) {
        menuIndex = 0;
    }
    lcd.setCursor(0,0);
    if (menuIndex == 0) {
        lcd.print("Filter                 ");
        lcd.setCursor(0,1);
        if (cutoff[0] > 9999) {
        lcd.print("Cutoff     ");
        } else if (cutoff[0] > 999) {
        lcd.print("Cutoff      ");
        } else if (cutoff[0] > 99) {
        lcd.print("Cutoff       ");
        } else if (cutoff[0] > 9){
        lcd.print("Cutoff        ");
        } else {
        lcd.print("Cutoff         ");
        }
        lcd.print(cutoff[0]);
    } else if (menuIndex == 1) {
        lcd.print("Filter                 ");
        lcd.setCursor(0,1);
        lcd.print("Resonance    ");
        lcd.print(resonance[0]);
    } else if (menuIndex == 2) {
        lcd.print("Filter                 ");
        lcd.setCursor(0,1);
        lcd.print("Env Amount   ");
        lcd.print(filterAmount[0]);
    }
}

void loop() {
    checkNotes();
}

