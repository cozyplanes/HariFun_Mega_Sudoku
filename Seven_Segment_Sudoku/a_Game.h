//-- Game States --
#define MODE_ASSIST 0
#define MODE_PICK_BOX 1
#define MODE_PICK_CELL 2
#define MODE_PICK_DIGIT 3
#define MODE_TEXT 4

volatile byte gameMode = MODE_ASSIST;
volatile byte selectedBox = 0;
volatile byte selectedCell = 0;
volatile byte selectedDigit = 0;

