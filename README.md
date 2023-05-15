# ProjectMobaGAS
We created this project as a demo to show the power of Unreal's GAS system and how it could help with the longevity of the project and its maintenance.
The GAS system creates abilities as separate objects which are, to a degree, already replicated, making multiplayer easier as a whole. Not only that, it also provides a way of stopping "crossing" logic from within classes dependent on what modes are being played.

## An example of this would be our Bongo gamemode and our MOBA gamemode:
Not every character is going to need the same abilities in both modes, which results in us making "catch cases" to check if we're in a certain gamemode. Over time, this can become messy, and it also limits how much we can change at a later date when adding new features.

If we implement GAS, we have full control over what abilities are given to the character and when they are given. Once the character has the ability, we then have the power to check if we can activate the ability through the use of gameplay ability tags.

## An example of this logic:
-> Start MOBA gamemode  
-> Give default character abilities from within the gamemode class to all current players (Heal, Damage, Death, XP Gain, Sprint, Jump, etc.. etc..)  
-> Activate ability through input by tags  

Say we don't want to be able to "Sprint" while "Jumping". From within the ability object itself, we can check if we have abilities active by tag. We can then define logic based on those tags. Say we have a tag called "Movement.Jump"; from the sprint ability, we can check if an ability is active with the "Movement.Jump" tag and cancel the "Sprint" ability before it even starts. It isn't limited there either; we can cancel current abilities, activate others, and a host of other features that help with modularity and maintainability.

### Pros:

* #### Flexible and customizable:
The GAS provides a highly flexible and customizable framework for implementing gameplay mechanics, allowing developers to create complex and varied gameplay systems.
* #### Modular design:
The GAS is designed with a modular architecture, which allows developers to easily create and reuse gameplay abilities across multiple characters and game modes.
* #### Network replication:
The GAS is built with network replication in mind, which means that gameplay abilities can be executed on both the server and the client, ensuring smooth and consistent gameplay experiences across multiple players.
* #### Scalable:
The GAS is scalable, which means that it can be used to implement gameplay mechanics for a variety of different game genres, from first-person shooters to role-playing games.
* #### Efficient:
The GAS is optimized for performance, which means that it can handle a large number of gameplay abilities and effects without impacting the game's framerate.

### Cons:

* #### Steep learning curve:
The GAS has a relatively steep learning curve, and may require a significant amount of time and effort to fully master.
* #### Complex implementation:
The GAS is a complex system, and may require a significant amount of code to implement gameplay abilities and effects.
* #### Limited documentation:
While the GAS has some documentation available, it may not be sufficient for all use cases, and developers may need to rely on trial and error or community resources to fully understand the system.
* #### Limited support:
As the GAS is a relatively new system, there may be limited support available from the community or from Epic Games, the creators of Unreal Engine.
* #### Current project changes:
We will have to make alot of changes to existing code, but it's not a rewrite; it's more of a case of taking already pre-defined logic and making it into it's own ability object.

## Documentation:

Below you will find documentation or little nuggets of information i have found on my GAS learning journey:

* Getting Started
* Ability Component
* Attribute Sets
* Ability Effects
* Ability Cues
* Adding New Abilities
* Adding New Attributes
