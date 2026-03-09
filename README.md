# Ideas for Semester 1 - 2026

## Existing Projects (Maintenance):
* Co2 Monitors
* Arcade

## New Ideas:

### Meshtastic or Meshcore
**Links**
* https://meshtastic.org
* https://www.youtube.com/watch?v=0A7A-CSd3e4
* https://mikeoplinger.com/a-basic-guide-to-meshtastic/

* https://meshcore.co.uk/
* https://hamradiotherapy.com/mesh/meshtastic-vs-meshcore-which-lora-mesh-network-should-you-choose/

**Ideas**
* Create a Mesh that can communicate with other nodes in Dunedin
* Range test, see how far we can go before we lose communication
* Write code to send automated messages from a node, which could send weather alerts or a similar sort of thing.
* Solar Node, have a node that the battery charges from a solar panel
* Go up to Signal Hill and see how far we can reach
 

### Myobiotic Arm Prosthesis

Interesting papers 

https://link.springer.com/content/pdf/10.1186/s12984-024-01423-9.pdf

https://www.sciencedirect.com/topics/engineering/upper-limb-prosthetics?__cf_chl_tk=m.A4NYHlV7tGm688c6CMycBy8jgybrkjn3IrU4Dpe.U-1772781121-1.0.1.1-aUYB4CwOzYAepIW5ScMNjC95iVlcN59rCZnyFAP9mFA

### RC sim Chair
**https://youtu.be/RUl8RUT7FV0?si=CSyJOvyMr60F3jSZ**
* creating a gimbal chair
* custom controller
* RC helicopter/ racing car
* fast laps tracks sensors / targets for the helicopter to shoot

### VR Gloves
My proposal is a virtual reality glove to allow a user to interact with their surroundings in a more immersive way that a controller cannot offer. Most vr headsets come with their own controllers which are often bulky and akin to a regular gamepad which is not ideal for use in a virtual environment where the main emphasis is on seamless immersion. There should be a more vr focused system to handle user inputs and interaction and I believe the next step in rectifying that gap is vr tracked gloves.
***
Why gloves compared to alternatives? 
camera-based finger tracking 

<img width="750" height="562" alt="image" src="https://github.com/user-attachments/assets/c86da631-4a6e-4430-922c-4a9ef48469a8" />

finger tracking predominantly found on the meta platform uses the spatial positioning cameras already apart of the headset to track hands and fingers. Although this has its upsides such as being free with full finger tracking it also has the downsides of hard to execute gesture based controls, occlusion problems with moving out of the range of the cameras or behind objects the cameras cant see behind, the reliance on a well lit play environment, and overall jankyness of the headsets ability to find and overlay the hands. These problems tend to break the emersion of the experience making them not a good option to replace current controllers.

<img width="940" height="529" alt="image" src="https://github.com/user-attachments/assets/0687d4f6-090d-475a-bbb5-4d6315def589" />

Index knuckles The knuckles are the pinnacle of modern controller design and are an easy pick for most vr enthusiasts with its standard layout with an extra trackpad for more customizable inputs. These controllers feature rudimentary finger tracking using hall affect sensors to detect the distance from the grip each finger is allowing for fairly accurate finger position. Although the knuckles are good they still require gripping controllers in hand making a divide between the game and reality. They also require constant calibration as the fingers constantly move out of place making the controller track the wrong fingers. Thirdly the controllers don’t feature any ability to splay the fingers removing a dimension from the fingers making them less of a one to one with the real world.
***
What limitations do gloves present and how can these be managed?
I believe gloves are the best option because they completely remove the any in hand object from the equation but that also comes with negatives such as lack of controls, no grippable object to keep the hand stable, lack of tracking within the steamvr play space, and glove breathability to allow the hands to keep cool during activity.
Controls

<img width="458" height="458" alt="image" src="https://github.com/user-attachments/assets/18cf98cb-1191-490f-a612-df799b9e766b" />

The current solution with gloves it to place the controls on the glove in a location that does not disturb regular movement. This can include controls such as joystick, buttons, triggers, and trackpads, allowing us to maintain support for the standard controls while being able to refine controls which are driven from hand movement such as grabbing. An alternative to this could also be gesture based similar to that of metas, minus the instability of camera-based tracking.
Grippable Object

<img width="354" height="355" alt="image" src="https://github.com/user-attachments/assets/0400fe34-7818-4a08-b91f-f81e758c3396" />

Using gloves means losing the stability of a controller to hold making it challenging to interact objects that require steady aim or tense/fast movements. This could be solved by using either a prop to hold or haptics to let the glove hold the fingers in certain positions. A prop would be the easiest approach being lightest and the least problematic whereas haptics would allow the gloves to mold to any shape allowing the ability to feel the shape of a virtual object in the real world increasing emersion immensely.
Lack of Tracking

<img width="358" height="358" alt="image" src="https://github.com/user-attachments/assets/a2ec052c-bccb-4f51-a9c6-cd0ee4df8530" />

<img width="475" height="356" alt="image" src="https://github.com/user-attachments/assets/bcc6e423-805a-4494-8dce-ebd242fecbd2" />

lack of tracking is an easily solvable problem but the quality of solutions vary depending on the components used. The first and cheapest option is to use the existing controllers to track the gloves location. This is done by attaching the controller to the gloves and using the positional data from the controllers as the data for the gloves. This method comes with the problem of carrying the weight and size of the controller attached to the hand making them cumbersome to use on even regular tasks.
The second solution would be to use full body trackers, which are universal trackers that tracks itself using steams lighthouses. These trackers are normally used to track limbs such as arms, legs, and torso allowing for the use of them within the virtual space. There are many trackers made by different manufacturers that offer varying features for example tundra labs have the tundra tracker which on top of tracking its position it can be expanded to use its battery power externally and transmit analog variables to the pc allowing for compact and streamlined builds.
Glove breathability

<img width="358" height="358" alt="image" src="https://github.com/user-attachments/assets/b375a945-7aea-487c-b50d-8c48f0178e93" />

with how active the virtual reality medium is complaints have been made about the current implementation of gloves to be hardly bearable to use with the gloves trapping sweat and heat and not providing enough airflow to keep the hands cool and dry. This can be fixed by keeping material minimal. The glove will need to be structural enough to hold and mount electronic components to it without completely covering the whole hand.

Other resources
https://www.youtube.com/watch?v=nmP8iGaPbeI
https://youtu.be/2yF-SJcg3zQ?si=b7RXZ437qlvX1y17
https://github.com/LucidVR/lucidgloves
https://github.com/ras-marques/ImmersiveGloves

