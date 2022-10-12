# Control and Trajectory Tracking for Autonomous Vehicles
In this project we complete a steer and throttle controller using PID Controller.

# Carla Simulator Output
In this project simulations will be ran using the Carla simulator there is a basic enviroment set up with different car obstacles and a road.

<img width="953" alt="step1_screenshot" src="https://user-images.githubusercontent.com/74157573/195218684-944e24ac-560b-4f95-a9eb-619be271e5f8.png">

# Project Questions
- Add the plots to your report and explain them (describe what you see)

<img width="443" alt="Throttle_2" src="https://user-images.githubusercontent.com/74157573/195218893-03f3ba57-514b-4f23-bbf8-e1dddcd7c377.png">

<img width="451" alt="Steer_2" src="https://user-images.githubusercontent.com/74157573/195218926-7fd0bb90-3266-41ee-b5fa-a53e895cce90.png">


- What is the effect of the PID according to the plots, how each part of the PID affects the control command?


- How would you design a way to automatically tune the PID parameters?


- PID controller is a model free controller, i.e. it does not use a model of the car. Could you explain the pros and cons of this type of controller?
*A model free controller is an alternative approach to control complex systems by using a simplified representation of the system and subsequent algebraic estimation techniques to design a simple, but effective, trajectory tracking controller. This is an advantage as we can make calculations quicker and easier and do not need to worry about complex details such as wind drag, or the static friction coeffiecient of the road.* 

- (Optional) What would you do to improve the PID controller?


