# SoftRobot
Arificial Muscle Controlled Robot Hand


## Steps
1. 3D print the stl files
2. Purchase the [ecoflex](https://www.amazon.com/gp/product/B00CA5VY3U/ref=ppx_yo_dt_b_asin_title_o08_s00?ie=UTF8&psc=1)to create the elastic muscle
3. Purchase 6V [air pumps](https://www.amazon.com/gp/product/B06Y2CXZ67/ref=ppx_yo_dt_b_asin_title_o08_s01?ie=UTF8&psc=1) which will serve as actuators for the muscles
4. Purchase [connectors](https://www.amazon.com/gp/product/B083DB11VD/ref=ppx_yo_dt_b_asin_title_o02_s01?ie=UTF8&psc=1)
5. Once the soft muscle are molded paste the musles onto the 3D printed robotic hand fingers
6. connect the pumps to the arduino via jumper wires and the muscles to the pumps via the connectors & pipes
7. Run the pump2.ino file on an arduino of your choice

## Results
I'm currently able to fold the fingers with the pump but I need to write code that controls the pumps based on a keypoint detection algorithm

### [demo]()

## TO DO
1. Develop a hand pose detection model that works in realtime
2. Try and migrate the pump control from Arduino to Raspberry Pi
