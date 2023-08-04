Objective: 
Develop a custom async node in C++ for Unreal Engine 5 that detects when an Actor's boolean value has changed, and subsequently destroys the listening Actor. The Actors can be represented as Cubes, Spheres, or any other shape as an example. Utilize event dispatchers to detect the boolean value change without relying on tick events or timers.

Requirements:

1. The custom async node should be implemented in C++.

2. There should be two Actors in the world. The target Actor should have a boolean variable, while the listening Actor does not. These Actors can be represented as Cubes, Spheres, or other shapes.

3. Create an event dispatcher in the target Actor that is triggered when its boolean value changes.

4. The listening Actor should bind to the target Actor's event dispatcher to detect the boolean value change using the custom async node.

5. Once the target Actor's boolean value has changed and the event dispatcher is triggered, only the listening Actor should be destroyed.

6. The destroyed actor should be replicated in multiplayer environments.