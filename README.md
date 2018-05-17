# CarND-Controls-PID
 *Evgeny Nuger*

---

This project consists of implementing a PID controller for a vehicle's steering.

PID controllers are feedback controllers that consist of proportional, derivative, and integral components:
```bash
control = -Kp*e - Kd*de - Ki*ie
```
where `Kp` is the proportional compenet, `Kd` is the derivative component, `Ki` is the integral component, and `e` is the feedback error between the current control and the desired target value, `de` is the derivative of the error, typically a difference between the current and previous errors, and `ei` is the error integral, typically the sum of error up to the current time step.

The proportional control effects how quickly the process reaches stability. Higher values may result in overshoot and oscillations. 

The derivative control effects the settling time of the error.

The integral control accelerates the rate at which the process approachs the target values.

The behaviour of the PID controller was tested in the project through manual tuning of parameters.

The tuning process began by setting the derivative and integral portions to zero, and setting the proportional control to a value that caused oscillations in the vehicles steering. Then, the integral component was slowly raised raised to remove remaining offset from the proportional component. Finally, the derivative control was increased until the steering control was smoothed.

In detail, the tuning approach implemented a 'visual gradient decent' such that small values were set to see effect, then a much larger value, then the upper and lower values are reduced based on the value that produced better results.


PID's could be turned through other approaches. One approach proposed in lectures was Twiddle, a greedy search algorithm. Other approaches such as Ziegler-Nichols, or Tyreus- Luyben have been shown to work.

This project should be tested again with an implementation of Twiddle in the near future.