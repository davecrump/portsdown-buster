#ifndef _POWER_METER_H__
#define _POWER_METER_H__

typedef struct
{
  int r,g,b;
} color_t;

typedef struct
{
  char Text[255];
  color_t  Color;
} status_t;


///////////////////////////////////////////// FUNCTION PROTOTYPES ///////////////////////////////

void GetConfigParam(char *, char *, char *);
void SetConfigParam(char *, char *, char *);
void ReadSavedParams();
void do_snapcheck();
int IsImageToBeChanged(int x,int y);
void Keyboard(char *, char *, int);
int openTouchScreen(int);
int getTouchScreenDetails(int*, int* ,int* ,int*);
void TransformTouchMap(int x, int y);
int IsButtonPushed(int NbButton, int x, int y);
int IsMenuButtonPushed(int x, int y);
int InitialiseButtons();
int AddButton(int x, int y, int w, int h);
int ButtonNumber(int, int);
int CreateButton(int MenuIndex, int ButtonPosition);
int AddButtonStatus(int ButtonIndex,char *Text,color_t *Color);
void AmendButtonStatus(int ButtonIndex, int ButtonStatusIndex, char *Text, color_t *Color);
void DrawButton(int ButtonIndex);
void SetButtonStatus(int ,int);
int GetButtonStatus(int ButtonIndex);
int getTouchSample(int*, int*, int*);
void UpdateWindow();
void wait_touch();
void CalculateMarkers();
void Normalise();
void ChangeLabel(int);
void ChangeRange(int button);
void ChangeSensor(int button);
void *WaitButtonEvent(void * arg);
void Define_Menu1();                 // XY Main Menu
void Define_Menu2();                 // XY Marker Menu
void Define_Menu3();                 // XY Labels Menu
void Define_Menu4();                 // XY System Menu
void Define_Menu5();                 // Mode Menu
void Define_Menu6();                 // Meter (Main) Menu
void Define_Menu7();
void Define_Menu8();
void Define_Menu9();
void Start_Highlights_Menu1();
void Start_Highlights_Menu4();
void Start_Highlights_Menu5();
void Start_Highlights_Menu6();
void Start_Highlights_Menu8();
void Start_Highlights_Menu9();
void Define_Menu41();
void DrawEmptyScreen();
void DrawYaxisLabels();
void DrawSettings();
void DrawTrace(int xoffset, int prev2, int prev1, int current);
void DrawMeterBox();
void DrawMeterArc();
void DrawMeterTicks(int major_ticks, int minor_ticks);
void DrawMeterSettings();
void Draw5MeterLabels(float LH_Value, float RH_Value);
void *MeterMovement(void * arg);
void ShowdBm(float dBm);
void ShowmW(float mW);
void Showraw(int);
void Showvolts(float);
void CheckWithinRange(int);
static void cleanexit(int calling_exit_code);
static void terminate(int dummy);


typedef struct
{
  int adc_val;
  float pwr_dBm;
} adc_lookup;

// Look-up tables for each power head
static adc_lookup ad8318_5[] =
{
  {0, 5.0},
  {1, 5.0},
  {2, 5.0},
  {3, 5.0},
  {4, 5.0},
  {5, 5.0},
  {6, 5.0},
  {7, 5.0},
  {8, 5.0},
  {9, 5.0},
  {10, 5.0},
  {11, 5.0},
  {12, 5.0},
  {13, 5.0},
  {14, 5.0},
  {15, 5.0},
  {16, 5.0},
  {17, 5.0},
  {18, 5.0},
  {19, 5.0},
  {20, 5.0},
  {21, 5.0},
  {22, 5.0},
  {23, 5.0},
  {24, 5.0},
  {25, 5.0},
  {26, 5.0},
  {27, 5.0},
  {28, 5.0},
  {29, 5.0},
  {30, 5.0},
  {31, 5.0},
  {32, 5.0},
  {33, 5.0},
  {34, 5.0},
  {35, 5.0},
  {36, 5.0},
  {37, 5.0},
  {38, 5.0},
  {39, 5.0},
  {40, 5.0},
  {41, 5.0},
  {42, 5.0},
  {43, 5.0},
  {44, 5.0},
  {45, 5.0},
  {46, 5.0},
  {47, 5.0},
  {48, 5.0},
  {49, 5.0},
  {50, 5.0},
  {51, 5.0},
  {52, 5.0},
  {53, 5.0},
  {54, 5.0},
  {55, 5.0},
  {56, 5.0},
  {57, 5.0},
  {58, 5.0},
  {59, 5.0},
  {60, 5.0},
  {61, 5.0},
  {62, 5.0},
  {63, 5.0},
  {64, 5.0},
  {65, 5.0},
  {66, 5.0},
  {67, 5.0},
  {68, 5.0},
  {69, 5.0},
  {70, 5.0},
  {71, 5.0},
  {72, 5.0},
  {73, 5.0},
  {74, 5.0},
  {75, 5.0},
  {76, 5.0},
  {77, 5.0},
  {78, 5.0},
  {79, 5.0},
  {80, 5.0},
  {81, 5.0},
  {82, 5.0},
  {83, 5.0},
  {84, 5.0},
  {85, 5.0},
  {86, 5.0},
  {87, 5.0},
  {88, 5.0},
  {89, 5.0},
  {90, 5.0},
  {91, 5.0},
  {92, 5.0},
  {93, 5.0},
  {94, 5.0},
  {95, 5.0},
  {96, 5.0},
  {97, 5.0},
  {98, 5.0},
  {99, 5.0},
  {100, 5.0},
  {101, 5.0},
  {102, 5.0},
  {103, 5.0},
  {104, 5.0},
  {105, 5.0},
  {106, 4.5},
  {107, 4.0},
  {108, 3.5},
  {109, 3.0},
  {110, 2.5},
  {111, 2.0},
  {112, 1.5},
  {113, 1.0},
  {114, 0.5},
  {115, 0.0},
  {116, -0.4},
  {117, -0.7},
  {118, -1.0},
  {119, -1.2},
  {120, -1.4},
  {121, -1.7},
  {122, -2.0},
  {123, -2.25},
  {124, -2.5},
  {125, -2.75},
  {126, -3.0},
  {127, -3.3},
  {128, -3.6},
  {129, -4.0},
  {130, -4.25},
  {131, -4.5},
  {132, -4.75},
  {133, -5.0},
  {134, -5.2},
  {135, -5.4},
  {136, -5.6},
  {137, -5.8},
  {138, -6.0},
  {139, -6.2},
  {140, -6.4},
  {141, -6.8},
  {142, -6.6},
  {143, -7.0},
  {144, -7.2},
  {145, -7.4},
  {146, -7.6},
  {147, -7.8},
  {148, -8.0},
  {149, -8.2},
  {150, -8.4},
  {151, -8.6},
  {152, -8.8},
  {153, -9.0},
  {154, -9.2},
  {155, -9.4},
  {156, -9.6},
  {157, -9.8},
  {158, -10.0},
  {159, -10.16},
  {160, -10.33},
  {161, -10.5},
  {162, -10.66},
  {163, -10.84},
  {164, -11.0},
  {165, -11.16},
  {166, -11.33},
  {167, -11.5},
  {168, -11.66},
  {169, -11.84},
  {170, -12.0},
  {171, -12.16},
  {172, -12.33},
  {173, -12.5},
  {174, -12.66},
  {175, -12.84},
  {176, -13.0},
  {177, -13.25},
  {178, -13.5},
  {179, -13.75},
  {180, -14.0},
  {181, -14.2},
  {182, -14.4},
  {183, -14.6},
  {184, -14.8},
  {185, -15.0},
  {186, -15.2},
  {187, -15.4},
  {188, -15.6},
  {189, -15.8},
  {190, -16.0},
  {191, -16.2},
  {192, -16.4},
  {193, -16.6},
  {194, -16.8},
  {195, -17.0},
  {196, -17.2},
  {197, -17.4},
  {198, -17.6},
  {199, -17.8},
  {200, -18.0},
  {201, -18.2},
  {202, -18.4},
  {203, -18.6},
  {204, -18.8},
  {205, -19.0},
  {206, -19.16},
  {207, -19.33},
  {208, -19.5},
  {209, -19.66},
  {210, -19.84},
  {211, -20.0},
  {212, -20.16},
  {213, -20.33},
  {214, -20.5},
  {215, -20.66},
  {216, -20.84},
  {217, -21.0},
  {218, -21.2},
  {219, -21.4},
  {220, -21.6},
  {221, -21.8},
  {222, -22.0},
  {223, -22.2},
  {224, -22.4},
  {225, -22.6},
  {226, -22.8},
  {227, -23.0},
  {228, -23.2},
  {229, -23.4},
  {230, -23.6},
  {231, -23.8},
  {232, -24.0},
  {233, -24.2},
  {234, -24.4},
  {235, -24.6},
  {236, -24.8},
  {237, -25.0},
  {238, -25.2},
  {239, -25.4},
  {240, -25.6},
  {241, -25.8},
  {242, -26.0},
  {243, -26.2},
  {244, -26.4},
  {245, -26.6},
  {246, -26.8},
  {247, -27.0},
  {248, -27.2},
  {249, -27.4},
  {250, -27.6},
  {251, -27.8},
  {252, -28.0},
  {253, -28.2},
  {254, -28.4},
  {255, -28.6},
  {256, -28.8},
  {257, -29.0},
  {258, -29.2},
  {259, -29.4},
  {260, -29.6},
  {261, -29.8},
  {262, -30.0},
  {263, -30.2},
  {264, -30.4},
  {265, -30.6},
  {266, -30.8},
  {267, -31.0},
  {268, -31.3},
  {269, -31.6},
  {270, -32.0},
  {271, -32.2},
  {272, -32.4},
  {273, -32.6},
  {274, -32.8},
  {275, -33.0},
  {276, -33.2},
  {277, -33.4},
  {278, -33.6},
  {279, -33.8},
  {280, -34.0},
  {281, -34.2},
  {282, -34.4},
  {283, -34.6},
  {284, -34.8},
  {285, -35.0},
  {286, -35.2},
  {287, -35.4},
  {288, -35.6},
  {289, -35.8},
  {290, -36.0},
  {291, -36.2},
  {292, -36.4},
  {293, -36.6},
  {294, -36.8},
  {295, -37.0},
  {296, -37.2},
  {297, -37.4},
  {298, -37.6},
  {299, -37.8},
  {300, -38.0},
  {301, -38.2},
  {302, -38.4},
  {303, -38.6},
  {304, -38.8},
  {305, -39.0},
  {306, -39.2},
  {307, -39.4},
  {308, -39.6},
  {309, -39.8},
  {310, -40.0},
  {311, -40.2},
  {312, -40.4},
  {313, -40.6},
  {314, -40.8},
  {315, -41.0},
  {316, -41.2},
  {317, -41.4},
  {318, -41.6},
  {319, -41.8},
  {320, -42.0},
  {321, -42.2},
  {322, -42.4},
  {323, -42.6},
  {324, -42.8},
  {325, -43.0},
  {326, -43.2},
  {327, -43.4},
  {328, -43.6},
  {329, -43.8},
  {330, -44.0},
  {331, -44.2},
  {332, -44.4},
  {333, -44.6},
  {334, -44.8},
  {335, -45.0},
  {336, -45.2},
  {337, -45.4},
  {338, -45.6},
  {339, -45.8},
  {340, -46.0},
  {341, -46.2},
  {342, -46.4},
  {343, -46.6},
  {344, -46.8},
  {345, -47.0},
  {346, -47.2},
  {347, -47.4},
  {348, -47.6},
  {349, -47.8},
  {350, -48.0},
  {351, -48.2},
  {352, -48.4},
  {353, -48.6},
  {354, -48.8},
  {355, -49.0},
  {356, -49.2},
  {357, -49.4},
  {358, -49.6},
  {359, -49.8},
  {360, -50.0},
  {361, -50.2},
  {362, -50.4},
  {363, -50.6},
  {364, -50.8},
  {365, -51.0},
  {366, -51.2},
  {367, -52.4},
  {368, -52.6},
  {369, -52.8},
  {370, -52.0},
  {371, -52.16},
  {372, -52.33},
  {373, -52.5},
  {374, -52.66},
  {375, -52.84},
  {376, -53.0},
  {377, -53.16},
  {378, -53.33},
  {379, -53.5},
  {380, -53.66},
  {381, -53.84},
  {382, -54.0},
  {383, -54.2},
  {384, -54.4},
  {385, -54.6},
  {386, -54.8},
  {387, -55.0},
  {388, -55.2},
  {389, -55.4},
  {390, -55.6},
  {391, -55.8},
  {392, -56.0},
  {393, -56.25},
  {394, -56.5},
  {395, -56.75},
  {396, -57.0},
  {397, -57.25},
  {398, -57.5},
  {399, -57.75},
  {400, -58.0},
  {401, -58.25},
  {402, -58.5},
  {403, -58.75},
  {404, -59.0},
  {405, -59.25},
  {406, -59.5},
  {407, -59.75},
  {408, -60.0},
  {409, -60.3},
  {410, -60.6},
  {411, -61.0},
  {412, -61.3},
  {413, -61.6},
  {414, -62.0},
  {415, -62.3},
  {416, -62.6},
  {417, -63.0},
  {418, -63.3},
  {419, -63.6},
  {420, -64.0},
  {421, -64.3},
  {422, -64.6},
  {423, -65.0},
  {424, -65.5},
  {425, -66.0},
  {426, -66.5},
  {427, -67.0},
  {428, -68.0},
  {429, -69.0},
  {430, -70.0},
  {431, -70.0},
  {432, -70.0},
  {433, -70.0},
  {434, -70.0},
  {435, -70.0},
  {436, -70.0},
  {437, -70.0},
  {438, -70.0},
  {439, -70.0},
  {440, -70.0},
  {441, -70.0},
  {442, -70.0},
  {443, -70.0},
  {444, -70.0},
  {445, -70.0},
  {446, -70.0},
  {447, -70.0},
  {448, -70.0},
  {449, -70.0},
  {450, -70.0},
  {451, -70.0},
  {452, -70.0},
  {453, -70.0},
  {454, -70.0},
  {455, -70.0},
  {456, -70.0},
  {457, -70.0},
  {458, -70.0},
  {459, -70.0},
  {460, -70.0},
  {461, -70.0},
  {462, -70.0},
  {463, -70.0},
  {464, -70.0},
  {465, -70.0},
  {466, -70.0},
  {467, -70.0},
  {468, -70.0},
  {469, -70.0},
  {470, -70.0},
  {471, -70.0},
  {472, -70.0},
  {473, -70.0},
  {474, -70.0},
  {475, -70.0},
  {476, -70.0},
  {477, -70.0},
  {478, -70.0},
  {479, -70.0},
  {480, -70.0},
  {481, -70.0},
  {482, -70.0},
  {483, -70.0},
  {484, -70.0},
  {485, -70.0},
  {486, -70.0},
  {487, -70.0},
  {488, -70.0},
  {489, -70.0},
  {490, -70.0},
  {491, -70.0},
  {492, -70.0},
  {493, -70.0},
  {494, -70.0},
  {495, -70.0},
  {496, -70.0},
  {497, -70.0},
  {498, -70.0},
  {499, -70.0},
  {500, -70.0},
  {501, -70.0},
  {502, -70.0},
  {503, -70.0},
  {504, -70.0},
  {505, -70.0},
  {506, -70.0},
  {507, -70.0},
  {508, -70.0},
  {509, -70.0},
  {510, -70.0},
  {511, -70.0},
  {512, -70.0},
  {513, -70.0},
  {514, -70.0},
  {515, -70.0},
  {516, -70.0},
  {517, -70.0},
  {518, -70.0},
  {519, -70.0},
  {520, -70.0},
  {521, -70.0},
  {522, -70.0},
  {523, -70.0},
  {524, -70.0},
  {525, -70.0},
  {526, -70.0},
  {527, -70.0},
  {528, -70.0},
  {529, -70.0},
  {530, -70.0},
  {531, -70.0},
  {532, -70.0},
  {533, -70.0},
  {534, -70.0},
  {535, -70.0},
  {536, -70.0},
  {537, -70.0},
  {538, -70.0},
  {539, -70.0},
  {540, -70.0},
  {541, -70.0},
  {542, -70.0},
  {543, -70.0},
  {544, -70.0},
  {545, -70.0},
  {546, -70.0},
  {547, -70.0},
  {548, -70.0},
  {549, -70.0},
  {550, -70.0},
  {551, -70.0},
  {552, -70.0},
  {553, -70.0},
  {554, -70.0},
  {555, -70.0},
  {556, -70.0},
  {557, -70.0},
  {558, -70.0},
  {559, -70.0},
  {560, -70.0},
  {561, -70.0},
  {562, -70.0},
  {563, -70.0},
  {564, -70.0},
  {565, -70.0},
  {566, -70.0},
  {567, -70.0},
  {568, -70.0},
  {569, -70.0},
  {570, -70.0},
  {571, -70.0},
  {572, -70.0},
  {573, -70.0},
  {574, -70.0},
  {575, 0},
  {576, 0},
  {577, 0},
  {578, 0},
  {579, 0},
  {580, 0},
  {581, 0},
  {582, 0},
  {583, 0},
  {584, 0},
  {585, 0},
  {586, 0},
  {587, 0},
  {588, 0},
  {589, 0},
  {590, 0},
  {591, 0},
  {592, 0},
  {593, 0},
  {594, 0},
  {595, 0},
  {596, 0},
  {597, 0},
  {598, 0},
  {599, 0},
  {600, 0},
  {601, 0},
  {602, 0},
  {603, 0},
  {604, 0},
  {605, 0},
  {606, 0},
  {607, 0},
  {608, 0},
  {609, 0},
  {610, 0},
  {611, 0},
  {612, 0},
  {613, 0},
  {614, 0},
  {615, 0},
  {616, 0},
  {617, 0},
  {618, 0},
  {619, 0},
  {620, 0},
  {621, 0},
  {622, 0},
  {623, 0},
  {624, 0},
  {625, 0},
  {626, 0},
  {627, 0},
  {628, 0},
  {629, 0},
  {630, 0},
  {631, 0},
  {632, 0},
  {633, 0},
  {634, 0},
  {635, 0},
  {636, 0},
  {637, 0},
  {638, 0},
  {639, 0},
  {640, 0},
  {641, 0},
  {642, 0},
  {643, 0},
  {644, 0},
  {645, 0},
  {646, 0},
  {647, 0},
  {648, 0},
  {649, 0},
  {650, 0},
  {651, 0},
  {652, 0},
  {653, 0},
  {654, 0},
  {655, 0},
  {656, 0},
  {657, 0},
  {658, 0},
  {659, 0},
  {660, 0},
  {661, 0},
  {662, 0},
  {663, 0},
  {664, 0},
  {665, 0},
  {666, 0},
  {667, 0},
  {668, 0},
  {669, 0},
  {670, 0},
  {671, 0},
  {672, 0},
  {673, 0},
  {674, 0},
  {675, 0},
  {676, 0},
  {677, 0},
  {678, 0},
  {679, 0},
  {680, 0},
  {681, 0},
  {682, 0},
  {683, 0},
  {684, 0},
  {685, 0},
  {686, 0},
  {687, 0},
  {688, 0},
  {689, 0},
  {690, 0},
  {691, 0},
  {692, 0},
  {693, 0},
  {694, 0},
  {695, 0},
  {696, 0},
  {697, 0},
  {698, 0},
  {699, 0},
  {700, 0},
  {701, 0},
  {702, 0},
  {703, 0},
  {704, 0},
  {705, 0},
  {706, 0},
  {707, 0},
  {708, 0},
  {709, 0},
  {710, 0},
  {711, 0},
  {712, 0},
  {713, 0},
  {714, 0},
  {715, 0},
  {716, 0},
  {717, 0},
  {718, 0},
  {719, 0},
  {720, 0},
  {721, 0},
  {722, 0},
  {723, 0},
  {724, 0},
  {725, 0},
  {726, 0},
  {727, 0},
  {728, 0},
  {729, 0},
  {730, 0},
  {731, 0},
  {732, 0},
  {733, 0},
  {734, 0},
  {735, 0},
  {736, 0},
  {737, 0},
  {738, 0},
  {739, 0},
  {740, 0},
  {741, 0},
  {742, 0},
  {743, 0},
  {744, 0},
  {745, 0},
  {746, 0},
  {747, 0},
  {748, 0},
  {749, 0},
  {750, 0},
  {751, 0},
  {752, 0},
  {753, 0},
  {754, 0},
  {755, 0},
  {756, 0},
  {757, 0},
  {758, 0},
  {759, 0},
  {760, 0},
  {761, 0},
  {762, 0},
  {763, 0},
  {764, 0},
  {765, 0},
  {766, 0},
  {767, 0},
  {768, 0},
  {769, 0},
  {770, 0},
  {771, 0},
  {772, 0},
  {773, 0},
  {774, 0},
  {775, 0},
  {776, 0},
  {777, 0},
  {778, 0},
  {779, 0},
  {780, 0},
  {781, 0},
  {782, 0},
  {783, 0},
  {784, 0},
  {785, 0},
  {786, 0},
  {787, 0},
  {788, 0},
  {789, 0},
  {790, 0},
  {791, 0},
  {792, 0},
  {793, 0},
  {794, 0},
  {795, 0},
  {796, 0},
  {797, 0},
  {798, 0},
  {799, 0},
  {800, 0},
  {801, 0},
  {802, 0},
  {803, 0},
  {804, 0},
  {805, 0},
  {806, 0},
  {807, 0},
  {808, 0},
  {809, 0},
  {810, 0},
  {811, 0},
  {812, 0},
  {813, 0},
  {814, 0},
  {815, 0},
  {816, 0},
  {817, 0},
  {818, 0},
  {819, 0},
  {820, 0},
  {821, 0},
  {822, 0},
  {823, 0},
  {824, 0},
  {825, 0},
  {826, 0},
  {827, 0},
  {828, 0},
  {829, 0},
  {830, 0},
  {831, 0},
  {832, 0},
  {833, 0},
  {834, 0},
  {835, 0},
  {836, 0},
  {837, 0},
  {838, 0},
  {839, 0},
  {840, 0},
  {841, 0},
  {842, 0},
  {843, 0},
  {844, 0},
  {845, 0},
  {846, 0},
  {847, 0},
  {848, 0},
  {849, 0},
  {850, 0},
  {851, 0},
  {852, 0},
  {853, 0},
  {854, 0},
  {855, 0},
  {856, 0},
  {857, 0},
  {858, 0},
  {859, 0},
  {860, 0},
  {861, 0},
  {862, 0},
  {863, 0},
  {864, 0},
  {865, 0},
  {866, 0},
  {867, 0},
  {868, 0},
  {869, 0},
  {870, 0},
  {871, 0},
  {872, 0},
  {873, 0},
  {874, 0},
  {875, 0},
  {876, 0},
  {877, 0},
  {878, 0},
  {879, 0},
  {880, 0},
  {881, 0},
  {882, 0},
  {883, 0},
  {884, 0},
  {885, 0},
  {886, 0},
  {887, 0},
  {888, 0},
  {889, 0},
  {890, 0},
  {891, 0},
  {892, 0},
  {893, 0},
  {894, 0},
  {895, 0},
  {896, 0},
  {897, 0},
  {898, 0},
  {899, 0},
  {900, 0},
  {901, 0},
  {902, 0},
  {903, 0},
  {904, 0},
  {905, 0},
  {906, 0},
  {907, 0},
  {908, 0},
  {909, 0},
  {910, 0},
  {911, 0},
  {912, 0},
  {913, 0},
  {914, 0},
  {915, 0},
  {916, 0},
  {917, 0},
  {918, 0},
  {919, 0},
  {920, 0},
  {921, 0},
  {922, 0},
  {923, 0},
  {924, 0},
  {925, 0},
  {926, 0},
  {927, 0},
  {928, 0},
  {929, 0},
  {930, 0},
  {931, 0},
  {932, 0},
  {933, 0},
  {934, 0},
  {935, 0},
  {936, 0},
  {937, 0},
  {938, 0},
  {939, 0},
  {940, 0},
  {941, 0},
  {942, 0},
  {943, 0},
  {944, 0},
  {945, 0},
  {946, 0},
  {947, 0},
  {948, 0},
  {949, 0},
  {950, 0},
  {951, 0},
  {952, 0},
  {953, 0},
  {954, 0},
  {955, 0},
  {956, 0},
  {957, 0},
  {958, 0},
  {959, 0},
  {960, 0},
  {961, 0},
  {962, 0},
  {963, 0},
  {964, 0},
  {965, 0},
  {966, 0},
  {967, 0},
  {968, 0},
  {969, 0},
  {970, 0},
  {971, 0},
  {972, 0},
  {973, 0},
  {974, 0},
  {975, 0},
  {976, 0},
  {977, 0},
  {978, 0},
  {979, 0},
  {980, 0},
  {981, 0},
  {982, 0},
  {983, 0},
  {984, 0},
  {985, 0},
  {986, 0},
  {987, 0},
  {988, 0},
  {989, 0},
  {990, 0},
  {991, 0},
  {992, 0},
  {993, 0},
  {994, 0},
  {995, 0},
  {996, 0},
  {997, 0},
  {998, 0},
  {999, 0},
  {1000, 0},
  {1001, 0},
  {1002, 0},
  {1003, 0},
  {1004, 0},
  {1005, 0},
  {1006, 0},
  {1007, 0},
  {1008, 0},
  {1009, 0},
  {1010, 0},
  {1011, 0},
  {1012, 0},
  {1013, 0},
  {1014, 0},
  {1015, 0},
  {1016, 0},
  {1017, 0},
  {1018, 0},
  {1019, 0},
  {1020, 0},
  {1021, 0},
  {1022, 0},
  {1023, 0},
};

int ad8318_5_underrange = 423;
int ad8318_5_overrange = 109;


static adc_lookup ad8318_3[] =
{
  {0, 5.0},
  {1, 5.0},
  {2, 5.0},
  {3, 5.0},
  {4, 5.0},
  {5, 5.0},
  {6, 5.0},
  {7, 5.0},
  {8, 5.0},
  {9, 5.0},
  {10, 5.0},
  {11, 5.0},
  {12, 5.0},
  {13, 5.0},
  {14, 5.0},
  {15, 5.0},
  {16, 5.0},
  {17, 5.0},
  {18, 5.0},
  {19, 5.0},
  {20, 5.0},
  {21, 5.0},
  {22, 5.0},
  {23, 5.0},
  {24, 5.0},
  {25, 5.0},
  {26, 5.0},
  {27, 5.0},
  {28, 5.0},
  {29, 5.0},
  {30, 5.0},
  {31, 5.0},
  {32, 5.0},
  {33, 5.0},
  {34, 5.0},
  {35, 5.0},
  {36, 5.0},
  {37, 5.0},
  {38, 5.0},
  {39, 5.0},
  {40, 5.0},
  {41, 5.0},
  {42, 5.0},
  {43, 5.0},
  {44, 5.0},
  {45, 5.0},
  {46, 5.0},
  {47, 5.0},
  {48, 5.0},
  {49, 5.0},
  {50, 5.0},
  {51, 5.0},
  {52, 5.0},
  {53, 5.0},
  {54, 5.0},
  {55, 5.0},
  {56, 5.0},
  {57, 5.0},
  {58, 5.0},
  {59, 5.0},
  {60, 5.0},
  {61, 5.0},
  {62, 5.0},
  {63, 5.0},
  {64, 5.0},
  {65, 5.0},
  {66, 5.0},
  {67, 5.0},
  {68, 5.0},
  {69, 5.0},
  {70, 5.0},
  {71, 5.0},
  {72, 5.0},
  {73, 5.0},
  {74, 5.0},
  {75, 5.0},
  {76, 5.0},
  {77, 5.0},
  {78, 5.0},
  {79, 5.0},
  {80, 5.0},
  {81, 5.0},
  {82, 5.0},
  {83, 5.0},
  {84, 5.0},
  {85, 5.0},
  {86, 5.0},
  {87, 5.0},
  {88, 5.0},
  {89, 5.0},
  {90, 5.0},
  {91, 5.0},
  {92, 5.0},
  {93, 5.0},
  {94, 5.0},
  {95, 5.0},
  {96, 5.0},
  {97, 5.0},
  {98, 5.0},
  {99, 5.0},
  {100, 5.0},
  {101, 5.0},
  {102, 5.0},
  {103, 5.0},
  {104, 5.0},
  {105, 5.0},
  {106, 5.0},
  {107, 5.0},
  {108, 5.0},
  {109, 5.0},
  {110, 5.0},
  {111, 5.0},
  {112, 5.0},
  {113, 5.0},
  {114, 5.0},
  {115, 5.0},
  {116, 5.0},
  {117, 5.0},
  {118, 5.0},
  {119, 5.0},
  {120, 5.0},
  {121, 5.0},
  {122, 5.0},
  {123, 5.0},
  {124, 5.0},
  {125, 5.0},
  {126, 5.0},
  {127, 5.0},
  {128, 5.0},
  {129, 5.0},
  {130, 5.0},
  {131, 5.0},
  {132, 5.0},
  {133, 5.0},
  {134, 5.0},
  {135, 5.0},
  {136, 5.0},
  {137, 5.0},
  {138, 5.0},
  {139, 5.0},
  {140, 5.0},
  {141, 5.0},
  {142, 5.0},
  {143, 5.0},
  {144, 5.0},
  {145, 5.0},
  {146, 5.0},
  {147, 5.0},
  {148, 5.0},
  {149, 5.0},
  {150, 5.0},
  {151, 5.0},
  {152, 5.0},
  {153, 5.0},
  {154, 5.0},
  {155, 5.0},
  {156, 5.0},
  {157, 5.0},
  {158, 5.0},
  {159, 4.5},
  {160, 4.0},
  {161, 3.5},
  {162, 3.0},
  {163, 2.66},
  {164, 2.33},
  {165, 2.0},
  {166, 1.66},
  {167, 1.33},
  {168, 1.0},
  {169, 0.75},
  {170, 0.5},
  {171, 0.25},
  {172, 0.0},
  {173, -0.2},
  {174, -0.4},
  {175, -0.6},
  {176, -0.8},
  {177, -1.0},
  {178, -1.16},
  {179, -1.33},
  {180, -1.5},
  {181, -1.66},
  {182, -1.84},
  {183, -2.0},
  {184, -2.2},
  {185, -2.4},
  {186, -2.6},
  {187, -2.8},
  {188, -3.0},
  {189, -3.16},
  {190, -3.33},
  {191, -3.5},
  {192, -3.66},
  {193, -3.84},
  {194, -4.0},
  {195, -4.16},
  {196, -4.33},
  {197, -4.5},
  {198, -4.66},
  {199, -4.83},
  {200, -5.0},
  {201, -5.16},
  {202, -5.33},
  {203, -5.5},
  {204, -5.66},
  {205, -5.84},
  {206, -6.0},
  {207, -6.14},
  {208, -6.28},
  {209, -6.42},
  {210, -6.58},
  {211, -6.72},
  {212, -6.86},
  {213, -7.0},
  {214, -7.125},
  {215, -7.25},
  {216, -7.325},
  {217, -7.5},
  {218, -7.625},
  {219, -7.75},
  {220, -7.875},
  {221, -8.0},
  {222, -8.14},
  {223, -8.28},
  {224, -8.42},
  {225, -8.58},
  {226, -6.72},
  {227, -8.86},
  {228, -9.0},
  {229, -9.125},
  {230, -9.25},
  {231, -9.375},
  {232, -9.5},
  {233, -9.625},
  {234, -9.75},
  {235, -9.875},
  {236, -10.0},
  {237, -10.125},
  {238, -10.25},
  {239, -10.375},
  {240, -10.5},
  {241, -10.625},
  {242, -10.75},
  {243, -10.875},
  {244, -11.0},
  {245, -11.125},
  {246, -11.25},
  {247, -11.375},
  {248, -11.5},
  {249, -11.625},
  {250, -11.75},
  {251, -11.875},
  {252, -12.0},
  {253, -12.125},
  {254, -12.25},
  {255, -12.375},
  {256, -12.5},
  {257, -12.625},
  {258, -12.75},
  {259, -12.875},
  {260, -13.0},
  {261, -13.125},
  {262, -13.25},
  {263, -13.375},
  {264, -13.5},
  {265, -13.625},
  {266, -13.75},
  {267, -13.875},
  {268, -14.0},
  {269, -14.125},
  {270, -14.25},
  {271, -14.375},
  {272, -14.5},
  {273, -14.625},
  {274, -14.75},
  {275, -14.875},
  {276, -15.0},
  {277, -15.125},
  {278, -15.25},
  {279, -15.375},
  {280, -15.5},
  {281, -15.625},
  {282, -15.75},
  {283, -15.875},
  {284, -16.0},
  {285, -16.125},
  {286, -16.25},
  {287, -16.375},
  {288, -16.5},
  {289, -16.625},
  {290, -16.75},
  {291, -16.875},
  {292, -17.0},
  {293, -17.125},
  {294, -17.25},
  {295, -17.375},
  {296, -17.5},
  {297, -17.625},
  {298, -17.75},
  {299, -17.875},
  {300, -18.0},
  {301, -18.125},
  {302, -18.25},
  {303, -18.375},
  {304, -18.5},
  {305, -18.625},
  {306, -18.75},
  {307, -18.875},
  {308, -19.0},
  {309, -19.125},
  {310, -19.25},
  {311, -19.375},
  {312, -19.5},
  {313, -19.625},
  {314, -19.75},
  {315, -19.875},
  {316, -20.0},
  {317, -20.125},
  {318, -20.25},
  {319, -20.375},
  {320, -20.5},
  {321, -20.625},
  {322, -20.75},
  {323, -20.875},
  {324, -21.0},
  {325, -21.125},
  {326, -21.25},
  {327, -21.375},
  {328, -21.5},
  {329, -21.625},
  {330, -21.75},
  {331, -21.875},
  {332, -22.0},
  {333, -22.14},
  {334, -22.28},
  {335, -22.42},
  {336, -22.58},
  {337, -22.72},
  {338, -22.84},
  {339, -23.0},
  {340, -23.14},
  {341, -23.28},
  {342, -23.42},
  {343, -23.58},
  {344, -23.72},
  {345, -23.86},
  {346, -24.0},
  {347, -24.125},
  {348, -24.25},
  {349, -24.375},
  {350, -24.5},
  {351, -24.625},
  {352, -24.75},
  {353, -24.875},
  {354, -25.0},
  {355, -25.14},
  {356, -25.28},
  {357, -25.42},
  {358, -25.58},
  {359, -25.72},
  {360, -25.86},
  {361, -26.0},
  {362, -26.14},
  {363, -26.28},
  {364, -26.42},
  {365, -26.58},
  {366, -26.72},
  {367, -26.86},
  {368, -27.0},
  {369, -27.14},
  {370, -27.28},
  {371, -27.42},
  {372, -27.58},
  {373, -27.72},
  {374, -27.86},
  {375, -28.0},
  {376, -28.14},
  {377, -28.28},
  {378, -28.42},
  {379, -28.58},
  {380, -28.72},
  {381, -28.86},
  {382, -29.0},
  {383, -29.14},
  {384, -29.28},
  {385, -29.42},
  {386, -29.58},
  {387, -29.72},
  {388, -29.84},
  {389, -30.0},
  {390, -30.14},
  {391, -30.28},
  {392, -30.42},
  {393, -30.58},
  {394, -30.72},
  {395, -30.86},
  {396, -31.0},
  {397, -31.14},
  {398, -31.28},
  {399, -31.42},
  {400, -31.58},
  {401, -31.72},
  {402, -31.86},
  {403, -32.0},
  {404, -32.125},
  {405, -32.25},
  {406, -32.375},
  {407, -32.5},
  {408, -32.625},
  {409, -32.75},
  {410, -32.875},
  {411, -33.0},
  {412, -33.125},
  {413, -33.25},
  {414, -33.375},
  {415, -33.5},
  {416, -33.625},
  {417, -33.75},
  {418, -33.875},
  {419, -34.0},
  {420, -34.125},
  {421, -34.25},
  {422, -34.375},
  {423, -34.5},
  {424, -34.625},
  {425, -34.75},
  {426, -34.875},
  {427, -35.0},
  {428, -35.125},
  {429, -35.25},
  {430, -35.375},
  {431, -35.5},
  {432, -35.625},
  {433, -35.75},
  {434, -35.875},
  {435, -36.0},
  {436, -36.125},
  {437, -36.25},
  {438, -36.375},
  {439, -36.5},
  {440, -36.625},
  {441, -36.75},
  {442, -36.875},
  {443, -37.0},
  {444, -37.125},
  {445, -37.25},
  {446, -37.375},
  {447, -37.5},
  {448, -37.625},
  {449, -37.75},
  {450, -37.875},
  {451, -38.0},
  {452, -38.125},
  {453, -38.25},
  {454, -38.375},
  {455, -38.5},
  {456, -38.625},
  {457, -38.75},
  {458, -38.875},
  {459, -39.0},
  {460, -39.125},
  {461, -39.25},
  {462, -39.375},
  {463, -39.5},
  {464, -39.625},
  {465, -39.75},
  {466, -39.875},
  {467, -40.0},
  {468, -40.125},
  {469, -40.25},
  {470, -40.375},
  {471, -40.5},
  {472, -40.625},
  {473, -40.75},
  {474, -40.875},
  {475, -41.0},
  {476, -41.14},
  {477, -41.28},
  {478, -41.42},
  {479, -41.58},
  {480, -41.72},
  {481, -41.86},
  {482, -42.0},
  {483, -42.14},
  {484, -42.28},
  {485, -42.42},
  {486, -42.58},
  {487, -42.72},
  {488, -42.86},
  {489, -43.0},
  {490, -43.125},
  {491, -43.25},
  {492, -43.375},
  {493, -43.5},
  {494, -43.625},
  {495, -43.75},
  {496, -43.875},
  {497, -44.0},
  {498, -44.14},
  {499, -44.28},
  {500, -44.42},
  {501, -44.58},
  {502, -44.72},
  {503, -44.86},
  {504, -45.0},
  {505, -45.125},
  {506, -45.25},
  {507, -45.375},
  {508, -45.5},
  {509, -45.625},
  {510, -45.75},
  {511, -45.875},
  {512, -46.0},
  {513, -46.14},
  {514, -46.28},
  {515, -46.42},
  {516, -46.58},
  {517, -46.72},
  {518, -46.86},
  {519, -47.0},
  {520, -47.14},
  {521, -47.28},
  {522, -47.42},
  {523, -47.58},
  {524, -47.72},
  {525, -47.86},
  {526, -48.0},
  {527, -48.14},
  {528, -48.28},
  {529, -48.42},
  {530, -48.58},
  {531, -48.72},
  {532, -48.86},
  {533, -49.0},
  {534, -49.14},
  {535, -49.28},
  {536, -49.42},
  {537, -49.58},
  {538, -49.72},
  {539, -49.86},
  {540, -50.0},
  {541, -50.125},
  {542, -50.25},
  {543, -50.375},
  {544, -50.5},
  {545, -50.625},
  {546, -50.75},
  {547, -50.875},
  {548, -51.0},
  {549, -51.125},
  {550, -51.25},
  {551, -51.375},
  {552, -51.5},
  {553, -51.625},
  {554, -51.75},
  {555, -51.875},
  {556, -52.0},
  {557, -52.125},
  {558, -52.25},
  {559, -52.375},
  {560, -52.50},
  {561, -52.625},
  {562, -52.75},
  {563, -52.875},
  {564, -53.0},
  {565, -53.14},
  {566, -53.28},
  {567, -53.42},
  {568, -53.58},
  {569, -53.72},
  {570, -53.86},
  {571, -54.0},
  {572, -54.14},
  {573, -54.28},
  {574, -54.42},
  {575, -54.58},
  {576, -54.72},
  {577, -54.86},
  {578, -55.0},
  {579, -55.14},
  {580, -55.28},
  {581, -55.42},
  {582, -55.58},
  {583, -55.72},
  {584, -55.86},
  {585, -56.0},
  {586, -56.14},
  {587, -56.28},
  {588, -56.42},
  {589, -56.58},
  {590, -56.72},
  {591, -56.86},
  {592, -57.0},
  {593, -57.16},
  {594, -57.33},
  {595, -57.5},
  {596, -57.66},
  {597, -57.83},
  {598, -58.0},
  {599, -58.16},
  {600, -58.33},
  {601, -58.5},
  {602, -58.66},
  {603, -58.83},
  {604, -59.0},
  {605, -59.16},
  {606, -59.33},
  {607, -59.5},
  {608, -59.66},
  {609, -59.83},
  {610, -60.0},
  {611, -60.16},
  {612, -60.33},
  {613, -60.5},
  {614, -60.66},
  {615, -60.83},
  {616, -61.0},
  {617, -61.2},
  {618, -61.4},
  {619, -61.6},
  {620, -61.8},
  {621, -62.0},
  {622, -62.2},
  {623, -62.4},
  {624, -62.6},
  {625, -62.8},
  {626, -63.0},
  {627, -63.33},
  {628, -63.66},
  {629, -64.0},
  {630, -64.33},
  {631, -64.66},
  {632, -65.0},
  {633, -65.33},
  {634, -65.66},
  {635, -66.0},
  {636, -66.5},
  {637, -67.0},
  {638, -67.5},
  {639, -68.0},
  {640, -68.5},
  {641, -69.0},
  {642, -70.0},
  {643, -70.0},
  {644, -70.0},
  {645, -70.0},
  {646, -70.0},
  {647, -70.0},
  {648, -70.0},
  {649, -70.0},
  {650, -70.0},
  {651, -70.0},
  {652, -70.0},
  {653, -70.0},
  {654, -70.0},
  {655, -70.0},
  {656, -70.0},
  {657, -70.0},
  {658, -70.0},
  {659, -70.0},
  {660, -70.0},
  {661, -70.0},
  {662, -70.0},
  {663, -70.0},
  {664, -70.0},
  {665, -70.0},
  {666, -70.0},
  {667, -70.0},
  {668, -70.0},
  {669, -70.0},
  {670, -70.0},
  {671, -70.0},
  {672, -70.0},
  {673, -70.0},
  {674, -70.0},
  {675, -70.0},
  {676, -70.0},
  {677, -70.0},
  {678, -70.0},
  {679, -70.0},
  {680, -70.0},
  {681, -70.0},
  {682, -70.0},
  {683, -70.0},
  {684, -70.0},
  {685, -70.0},
  {686, -70.0},
  {687, -70.0},
  {688, -70.0},
  {689, -70.0},
  {690, -70.0},
  {691, -70.0},
  {692, -70.0},
  {693, -70.0},
  {694, -70.0},
  {695, -70.0},
  {696, -70.0},
  {697, -70.0},
  {698, -70.0},
  {699, -70.0},
  {700, -70.0},
  {701, -70.0},
  {702, -70.0},
  {703, -70.0},
  {704, -70.0},
  {705, -70.0},
  {706, -70.0},
  {707, -70.0},
  {708, -70.0},
  {709, -70.0},
  {710, -70.0},
  {711, -70.0},
  {712, -70.0},
  {713, -70.0},
  {714, -70.0},
  {715, -70.0},
  {716, -70.0},
  {717, -70.0},
  {718, -70.0},
  {719, -70.0},
  {720, -70.0},
  {721, -70.0},
  {722, -70.0},
  {723, -70.0},
  {724, -70.0},
  {725, -70.0},
  {726, -70.0},
  {727, -70.0},
  {728, -70.0},
  {729, -70.0},
  {730, -70.0},
  {731, -70.0},
  {732, -70.0},
  {733, -70.0},
  {734, -70.0},
  {735, -70.0},
  {736, -70.0},
  {737, -70.0},
  {738, -70.0},
  {739, -70.0},
  {740, -70.0},
  {741, -70.0},
  {742, -70.0},
  {743, -70.0},
  {744, -70.0},
  {745, -70.0},
  {746, -70.0},
  {747, -70.0},
  {748, -70.0},
  {749, -70.0},
  {750, -70.0},
  {751, -70.0},
  {752, -70.0},
  {753, -70.0},
  {754, -70.0},
  {755, -70.0},
  {756, -70.0},
  {757, -70.0},
  {758, -70.0},
  {759, -70.0},
  {760, -70.0},
  {761, -70.0},
  {762, -70.0},
  {763, -70.0},
  {764, -70.0},
  {765, -70.0},
  {766, -70.0},
  {767, -70.0},
  {768, -70.0},
  {769, -70.0},
  {770, -70.0},
  {771, -70.0},
  {772, -70.0},
  {773, -70.0},
  {774, -70.0},
  {775, -70.0},
  {776, -70.0},
  {777, -70.0},
  {778, -70.0},
  {779, -70.0},
  {780, -70.0},
  {781, -70.0},
  {782, -70.0},
  {783, -70.0},
  {784, -70.0},
  {785, -70.0},
  {786, -70.0},
  {787, -70.0},
  {788, -70.0},
  {789, -70.0},
  {790, -70.0},
  {791, -70.0},
  {792, -70.0},
  {793, -70.0},
  {794, -70.0},
  {795, -70.0},
  {796, -70.0},
  {797, -70.0},
  {798, -70.0},
  {799, -70.0},
  {800, -70.0},
  {801, -70.0},
  {802, 0},
  {803, 0},
  {804, 0},
  {805, 0},
  {806, 0},
  {807, 0},
  {808, 0},
  {809, 0},
  {810, 0},
  {811, 0},
  {812, 0},
  {813, 0},
  {814, 0},
  {815, 0},
  {816, 0},
  {817, 0},
  {818, 0},
  {819, 0},
  {820, 0},
  {821, 0},
  {822, 0},
  {823, 0},
  {824, 0},
  {825, 0},
  {826, 0},
  {827, 0},
  {828, 0},
  {829, 0},
  {830, 0},
  {831, 0},
  {832, 0},
  {833, 0},
  {834, 0},
  {835, 0},
  {836, 0},
  {837, 0},
  {838, 0},
  {839, 0},
  {840, 0},
  {841, 0},
  {842, 0},
  {843, 0},
  {844, 0},
  {845, 0},
  {846, 0},
  {847, 0},
  {848, 0},
  {849, 0},
  {850, 0},
  {851, 0},
  {852, 0},
  {853, 0},
  {854, 0},
  {855, 0},
  {856, 0},
  {857, 0},
  {858, 0},
  {859, 0},
  {860, 0},
  {861, 0},
  {862, 0},
  {863, 0},
  {864, 0},
  {865, 0},
  {866, 0},
  {867, 0},
  {868, 0},
  {869, 0},
  {870, 0},
  {871, 0},
  {872, 0},
  {873, 0},
  {874, 0},
  {875, 0},
  {876, 0},
  {877, 0},
  {878, 0},
  {879, 0},
  {880, 0},
  {881, 0},
  {882, 0},
  {883, 0},
  {884, 0},
  {885, 0},
  {886, 0},
  {887, 0},
  {888, 0},
  {889, 0},
  {890, 0},
  {891, 0},
  {892, 0},
  {893, 0},
  {894, 0},
  {895, 0},
  {896, 0},
  {897, 0},
  {898, 0},
  {899, 0},
  {900, 0},
  {901, 0},
  {902, 0},
  {903, 0},
  {904, 0},
  {905, 0},
  {906, 0},
  {907, 0},
  {908, 0},
  {909, 0},
  {910, 0},
  {911, 0},
  {912, 0},
  {913, 0},
  {914, 0},
  {915, 0},
  {916, 0},
  {917, 0},
  {918, 0},
  {919, 0},
  {920, 0},
  {921, 0},
  {922, 0},
  {923, 0},
  {924, 0},
  {925, 0},
  {926, 0},
  {927, 0},
  {928, 0},
  {929, 0},
  {930, 0},
  {931, 0},
  {932, 0},
  {933, 0},
  {934, 0},
  {935, 0},
  {936, 0},
  {937, 0},
  {938, 0},
  {939, 0},
  {940, 0},
  {941, 0},
  {942, 0},
  {943, 0},
  {944, 0},
  {945, 0},
  {946, 0},
  {947, 0},
  {948, 0},
  {949, 0},
  {950, 0},
  {951, 0},
  {952, 0},
  {953, 0},
  {954, 0},
  {955, 0},
  {956, 0},
  {957, 0},
  {958, 0},
  {959, 0},
  {960, 0},
  {961, 0},
  {962, 0},
  {963, 0},
  {964, 0},
  {965, 0},
  {966, 0},
  {967, 0},
  {968, 0},
  {969, 0},
  {970, 0},
  {971, 0},
  {972, 0},
  {973, 0},
  {974, 0},
  {975, 0},
  {976, 0},
  {977, 0},
  {978, 0},
  {979, 0},
  {980, 0},
  {981, 0},
  {982, 0},
  {983, 0},
  {984, 0},
  {985, 0},
  {986, 0},
  {987, 0},
  {988, 0},
  {989, 0},
  {990, 0},
  {991, 0},
  {992, 0},
  {993, 0},
  {994, 0},
  {995, 0},
  {996, 0},
  {997, 0},
  {998, 0},
  {999, 0},
  {1000, 0},
  {1001, 0},
  {1002, 0},
  {1003, 0},
  {1004, 0},
  {1005, 0},
  {1006, 0},
  {1007, 0},
  {1008, 0},
  {1009, 0},
  {1010, 0},
  {1011, 0},
  {1012, 0},
  {1013, 0},
  {1014, 0},
  {1015, 0},
  {1016, 0},
  {1017, 0},
  {1018, 0},
  {1019, 0},
  {1020, 0},
  {1021, 0},
  {1022, 0},
  {1023, 0},
};

int ad8318_3_underrange = 633;
int ad8318_3_overrange = 161;



#endif /* _POWER_METER_H__ */
