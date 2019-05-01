#pragma once

//High-level Configuration
#define LAYOUT_NUM 6
#define TEST_MODE 0
#define BLUE_BLOCK_LAMP_ON 1
#define YELLOW_BLOCK_LAMP_ON 0
#define RED_BLOCK_LAMP_ON 0
#define LINE_MODE_ON 1

//Motor & Sensor Ports
#define LEFT_MOTOR_PORT 20
#define RIGHT_MOTOR_PORT 11
#define CLAW_MOTOR_PORT 18
#define ARM_LEFT_PORT 19
#define ARM_RIGHT_PORT 12
#define LAMP_PORT 10
#define BLOCK_VISION_PORT 17
#define FLOOR_VISION_PORT 16
#define SONAR_L_PORT_IN 1
#define SONAR_L_PORT_OUT 2
#define SONAR_R_PORT_IN 3
#define SONAR_R_PORT_OUT 4
#define LINE_L_PORT 5
#define LINE_M_PORT 6
#define LINE_R_PORT 7
#define LINE_B_PORT 8

//Constants
#define WIDTH_TO_DIST 7.81705
#define CM_TO_MOTOR_DEG 16.4245
#define ROBOT_TO_MOTOR_DEG 3.5114//3.5097;//3.508457;
#define BRAIN_SCREEN_WIDTH 480
#define BRAIN_SCREEN_HEIGHT 272
#define BRAIN_SCREEN_BANNER_HEIGHT 32
#define VISION_WIDTH 304
#define VISION_HEIGHT 208
#define DRAWABLE_WIDTH BRAIN_SCREEN_WIDTH
#define DRAWABLE_HEIGHT BRAIN_SCREEN_HEIGHT - BRAIN_SCREEN_BANNER_HEIGHT
#define VISION_TO_DRAWABLE (((double) DRAWABLE_HEIGHT) / VISION_HEIGHT)
#define DRAWN_VISION_BORDER std::round((BRAIN_SCREEN_WIDTH - (VISION_WIDTH * VISION_TO_DRAWABLE)) / 2)
#define VISION_CENTER VISION_WIDTH / 2
#define VISION_EXPOSURE_MIN 0
#define VISION_EXPOSURE_MAX 150
enum class BlockType { None, Blue, Yellow, Red };
enum class MovementType { None, Left, Right, Forward, Backward };

//Config Variables
#define ARM_DROPOFF_DEG 600/*550*/
#define ARM_PICKUP_DEG 435/*450*/
#define ARM_PICKUP_SENSITIVITY 5
#define ARM_PICKUP_SPEED 50/*30*/
#define BLOCK_TYPE_MIN_X 300
#define BLOCK_TYPE_MIN_Y 100
#define BLOCK_TYPE_MAX_X 350
#define BLOCK_TYPE_MAX_Y 150
#define CAMERA_MOVEMENT_SPEED 40
#define CLAW_CLOSE_DEG -190/*//-170;//-155; //degrees*/
#define CLAW_MOVE_SPEED 40
#define DROPOFF_DIST 12/*11*/
#define DROPOFF_INITIAL_BACKWARD 12
#define DROPOFF_FORWARD_BONUS 20/*14*//*11*/
#define DROPOFF_FORWARD_BONUS_2 18/*11*/
#define DROPOFF_MIN 40/*90*/
#define DROPOFF_MAX 60/*130*/
#define DROPOFF_MOVE_OFFSET 16/*14*/
#define DROPOFF_SENSITIVITY 0.6
#define LAMP_ON_SPEED 100
#define LINE_MOVEMENT_SPEED 30
#define LINE_VALUE_THRESHOLD 1000
#define MOVEMENT_SPEED 60/*40*/
#define MOVE_SENSITIVITY 5
#define MOVE_UNTIL_SENSITIVITY 1.0
#define PICKUP_DIST 23
#define PICKUP_SENSITIVITY 1.0
#define REALIGN_CUTOFF_DIFF 200
#define REALIGN_CUTOFF_MOTOR_DEG 70
#define REALIGN_DIST 50.0
#define REALIGN_LINE_BACKWARD -6
#define REALIGN_LINE_FORWARD 7
#define REALIGN_LINE_MOVE_DEG 100 /* Motor degrees */
#define REALIGN_LINE_TURN_DEG 180/*135*/ /* Robot degrees / 2 */
#define REALIGN_MAX_MOVES 50
#define REALIGN_SENSITIVITY 0.2/*0.1*/
#define REALIGN_SPEED 8/*5*/
#define SENSOR_TO_WHEEL_DIST 22/*15*//*12*/ /* cm */
#define SNAPSHOT_OBJ_COUNT 10
#define SPIN_UNTIL_MIN_MSEC 400
#define VISION_BLOCK_WIFI_ON 0
#define VISION_FLOOR_WIFI_ON 0
#define VISION_CENTER_SENSITIVITY 40
#define VISION_EXPOSURE_STEP_PRELIM 10
#define VISION_NUM_OBJECTS 5
#define VISION_NUM_SIGHTS_PICKUP 5
#define VISION_OUTLIER_SENSITIVITY 40
#define VISION_SNAPSHOT_MIN_AREA 400

//Vision Sensor Exposure Settings
#define VISION_BLUE_BLOCK_EXPOSURE 30
#define VISION_YELLOW_BLOCK_EXPOSURE 60
#define VISION_RED_BLOCK_EXPOSURE 40/*70*//*110*//*94*/
#define VISION_BLUE_FLOOR_EXPOSURE 60
#define VISION_YELLOW_FLOOR_EXPOSURE 60
#define VISION_RED_FLOOR_EXPOSURE 44

//Vision Sensor Signature Constants
#define SIG_BLUE_BLOCK 1
#define SIG_YELLOW_BLOCK 2
#define SIG_RED_BLOCK 3
#define SIG_BLUE_FLOOR 1
#define SIG_YELLOW_FLOOR 2
#define SIG_RED_FLOOR 3
#define SIG_NULL 6
//Pulled from the VCS utility, exported by ../configExporter.html
#define SIG_INIT_BLUE_BLOCK BlockVision.signature_from_utility(SIG_BLUE_BLOCK, -3147, -2063, -2605, 9375, 13871, 11623, 4, 0)
#define SIG_INIT_YELLOW_BLOCK BlockVision.signature_from_utility(SIG_YELLOW_BLOCK, -159, 223, 32, -4097, -3665, -3882, 5.9, 0)
#define SIG_INIT_RED_BLOCK BlockVision.signature_from_utility(SIG_RED_BLOCK, 7013, 7607, 7310, -1371, -971, -1171, 5.6, 0)
#define SIG_INIT_BLUE_FLOOR FloorVision.signature_from_utility(SIG_BLUE_FLOOR, -4161, -3537, -3849, 5745, 6709, 6227, 10, 0)
#define SIG_INIT_YELLOW_FLOOR FloorVision.signature_from_utility(SIG_YELLOW_FLOOR, 773, 1463, 1118, -4113, -3763, -3938, 7, 0)
#define SIG_INIT_RED_FLOOR FloorVision.signature_from_utility(SIG_RED_FLOOR, 8057, 9309, 8683, -1365, -881, -1123, 9, 0)
