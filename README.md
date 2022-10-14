# Control and Trajectory Tracking for Autonomous Vehicles
In this project we complete a steer and throttle controller using PID Controller.

# Carla Simulator Output
In this project simulations will be ran using the Carla simulator there is a basic enviroment set up with different car obstacles and a road.

<img width="953" alt="step1_screenshot" src="https://user-images.githubusercontent.com/74157573/195218684-944e24ac-560b-4f95-a9eb-619be271e5f8.png">

# Project Questions
- Add the plots to your report and explain them (describe what you see)

<img width="851" alt="Steer_3" src="https://user-images.githubusercontent.com/74157573/195918723-8b6d5dfd-8397-49bc-be7d-ece57b30e2c5.png">

In the steering plot above we have the calculated error and the steering output plotted. The error is the actual yaw of the car difference from the planned yaw. It would be a poor control solution if we just used the error as the steer this would be a very uncomfortable ride. So the Steering output we can see how our PID controller transformed the error into something smoother. This is very apparent in the points from 20-30 are working well as the error increase the output occured but slower and at a lower magnitude.

<img width="786" alt="Throttle_3" src="https://user-images.githubusercontent.com/74157573/195918735-85de368c-b4f1-40b8-bf91-bf37e4256fd7.png">

In the above throttle plot we see the velocity error, brack output and throttle output. We can see how our pid controller has transformed the error decreasing the magnitude, and dampend spikes.

- What is the effect of the PID according to the plots, how each part of the PID affects the control command?

The PID controller is porportional gain, derivative gain, and integral gain. Each of the factors the derivative and the integral coeffiicents can be thought of dampening and spring coeffiecients. All of these factors combined can be used to smooth the error into something more appropiate for the output. Again we are trying to avoid drastic actions in our car.

- How would you design a way to automatically tune the PID parameters?

I would use a type of grid search since the parameters are all related in the complex system. I would systematically change one gain, then have a way to score the out put and any collisions would parameters would be disregarded.


- PID controller is a model free controller, i.e. it does not use a model of the car. Could you explain the pros and cons of this type of controller?

A model free controller is an alternative approach to control complex systems by using a simplified representation of the system and subsequent algebraic estimation techniques to design a simple, but effective, trajectory tracking controller. This is an advantage as we can make calculations quicker and easier and do not need to worry about complex details such as wind drag, or the static friction coeffiecient of the road.

- (Optional) What would you do to improve the PID controller?

I think something a little more complicated would be good for instance for the throttle some rate limited control so that we are not just outputting 1 or 0. Tuning the parameters felt a bit rudementary I think some additional knobs would be helpful.

