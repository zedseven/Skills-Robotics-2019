#pragma once

//High-level Configuration
#define LAYOUT_NUM 6
#define TEST_MODE 1

//Motor Ports
#define LEFT_MOTOR_PORT 1
#define RIGHT_MOTOR_PORT 2
#define CLAW_MOTOR_PORT 3
#define ARM_LEFT_PORT 20
#define ARM_RIGHT_PORT 11
#define LAMP_PORT 10
#define BLOCK_VISION_PORT 5
#define FLOOR_VISION_PORT 6
#define SONAR_L_PORT_IN 1
#define SONAR_L_PORT_OUT 2
#define SONAR_R_PORT_IN 3
#define SONAR_R_PORT_OUT 4

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
#define VISION_BLOCK_WIFI_ON 0
#define VISION_FLOOR_WIFI_ON 0
#define VISION_NUM_OBJECTS 5
#define SNAPSHOT_OBJ_COUNT 10
#define MOVEMENT_SPEED 60/*40*/
#define CAMERA_MOVEMENT_SPEED 40
#define REALIGN_SPEED 8/*5*/
#define VISION_CENTER_SENSITIVITY 40
#define PICKUP_DIST 23
#define PICKUP_SENSITIVITY 1.0
#define DROPOFF_DIST 11
#define DROPOFF_SENSITIVITY 0.6
#define ARM_PICKUP_DEG 450
#define ARM_DROPOFF_DEG 600/*550*/
#define ARM_PICKUP_SENSITIVITY 5
#define ARM_PICKUP_SPEED 50/*30*/
#define MOVE_SENSITIVITY 5
#define DROPOFF_MIN 110
#define DROPOFF_MAX 150
#define CLAW_CLOSE_DEG -190/*//-170;//-155; //degrees*/
#define CLAW_MOVE_SPEED 40
#define LAMP_ON_SPEED 100
#define REALIGN_SENSITIVITY 0.2/*0.1*/
#define REALIGN_DIST 50.0
#define MOVE_UNTIL_SENSITIVITY 1.0
#define BLOCK_TYPE_MIN_X 300
#define BLOCK_TYPE_MAX_X 350
#define BLOCK_TYPE_MIN_Y 100
#define BLOCK_TYPE_MAX_Y 150
#define VISION_EXPOSURE_STEP_PRELIM 10
#define SPIN_UNTIL_MIN_MSEC 400
#define VISION_OUTLIER_SENSITIVITY 40
#define VISION_SNAPSHOT_MIN_AREA 400
#define BLOCK_DROPOFF_FORWARD_BONUS 11
#define BLOCK_DROPOFF_FORWARD_BONUS_2 8
#define DROPOFF_MOVE_OFFSET 16/*14*/
#define BLOCK_DROPOFF_INITIAL_BACKWARD 14
#define VISION_NUM_SIGHTS_PICKUP 5

//Vision Sensor Exposure Settings
#define VISION_BLUE_BLOCK_EXPOSURE 95
#define VISION_YELLOW_BLOCK_EXPOSURE 20
#define VISION_RED_BLOCK_EXPOSURE 70/*110*//*94*/
#define VISION_BLUE_FLOOR_EXPOSURE 50
#define VISION_YELLOW_FLOOR_EXPOSURE 50
#define VISION_RED_FLOOR_EXPOSURE 50

//Vision Sensor Signature Constants
#define SIG_BLUE_BLOCK 1
#define SIG_YELLOW_BLOCK 2
#define SIG_RED_BLOCK 3
#define SIG_BLUE_FLOOR 1
#define SIG_YELLOW_FLOOR 2
#define SIG_RED_FLOOR 3
#define SIG_NULL 6
//Pulled from the VCS utility, exported by ../configExporter.html
#define SIG_INIT_BLUE_BLOCK BlockVision.signature_from_utility(SIG_BLUE_BLOCK, -3157, -2607, -2882, 11645, 13653, 12650, 7.5, 0)
#define SIG_INIT_YELLOW_BLOCK BlockVision.signature_from_utility(SIG_YELLOW_BLOCK, 107, 445, 276, -3895, -3565, -3730, 5.5, 0)
#define SIG_INIT_RED_BLOCK BlockVision.signature_from_utility(SIG_RED_BLOCK, 5461, 6255, 5858, -1655, -1033, -1344, 8, 0)
#define SIG_INIT_BLUE_FLOOR FloorVision.signature_from_utility(SIG_BLUE_FLOOR, -3583, -3073, -3328, 5391, 6237, 5814, 7, 0)
#define SIG_INIT_YELLOW_FLOOR FloorVision.signature_from_utility(SIG_YELLOW_FLOOR, 865, 1561, 1214, -3855, -3159, -3506, 2.799999952316284, 0)
#define SIG_INIT_RED_FLOOR FloorVision.signature_from_utility(SIG_RED_FLOOR, 8045, 10049, 9048, -1103, -735, -918, 6.099999904632568, 0)
