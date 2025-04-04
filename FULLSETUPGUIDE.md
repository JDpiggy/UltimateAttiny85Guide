# Full Setup guide (for Windows)

## Making sure your computer knows it's plugged in
### Physical check
I know this sounds silly but your computer likely doesn't even recognize the device. Which is the first problem you might have. A great indication of whether or not your computer going to recognize the ATtiny85 is the USB port that you plug your device into. a blue thingy inside the USB port means USB 3.0, a red one means USB 3.1, and a black one means 2.0 (reference image below).
<p align="center">
<a href="https://ibb.co/ymNZ15hn"><img src="https://i.ibb.co/Q7JTRn8F/Untitled-design.png" alt="picsofdifferenttypesofusbs" border="0"></a>
</p>
Unfortunately to my knowledge the ATtiny85 is only recognized in a USB 2.0 (the black thingy) port. If it's white it might work. If you don't have a device with USB 2.0, you unfortunatley have to buy a USB 3.0 to 2.0 cable or adapter. However, you might just have a USB to USB cord in your house that works (I didn't but a friend did so that was great).

### Making Sure with a Digital Check
Open the windows menu, then search for device manager, open it. Once you are on this list you want to look for an unkown device like in the picture below.
<p align="center">
<a><img src="https://howtomanagedevices.com/wp-content/uploads/2021/01/image-62.png" alt="unkown device" border="0"></a>
</p>
Unplug and replug the board in. This is so that the device is obvious to your computer. When you plug it in, for the first 5 seconds it is in programmable/obvious/reading mode, but after it goes into write mode. Right now write mode won't do anything because it isn't programmed at all. Let's get back to task manager. So freshly pluged in you want the yellow warning shape and it should say unkown device, you may have to go to the top of the device manager and click view, and then show hidden devices but probably not. <strong>If you don't have this unkown device WITH THE YELLOW TRIANGLE, your computer doesn't recognize the device.</strong> (so you need to get an adapter/cord). If you don't have the yellow thing but an unkown device it's likely just always chilling there because its some secret thing in the depths of your computer.

## Putting Drivers on this Bad Boy
### Get the drivers
Firstly you need to dowload the ATtiny85 drivers so that you can put them on the device. Now go through this GitHub and download the circled driver file in the image (Digistump.Drivers.zip). Here is the link to download. 
<a href="https://ibb.co/XfRbVzL8"><img src="https://i.ibb.co/JWJKCztQ/Untitled-design-1.png" alt="Digistump.Drivers.zip" border="0"></a>
**made for:**<br>
This was designed for the ATtiny85 for Windows <br>

#### PrintOrder(code).ino.:<br>
This navigates to a link  to a document that you specify* then prints, confirms the print, and then Alt + f4's out.<br>

#### *Your  file link:<br>
For the link to be accessed and opened properly you must make sure that the document is shared/accesible to the device you want to send the print order from. This is perfect for taking something from your personal computer and printing on a friend's/coworker's/connected computer. 
