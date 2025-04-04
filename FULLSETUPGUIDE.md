# Full ATtiny85 Setup guide (for Windows)

## Making sure your computer knows it's plugged in
### Physical check
I know this sounds silly, but your computer likely doesn't even recognize the device, which is the first problem you might encounter. A great indication of whether or not your computer will recognize the ATtiny85 is the USB port that you plug your device into. a blue rectangle inside the USB port means USB 3.0, a red one means USB 3.1, and a black one means 2.0 (reference image below).
<p align="center">
<a href="https://ibb.co/ymNZ15hn"><img src="https://i.ibb.co/Q7JTRn8F/Untitled-design.png" alt="picsofdifferenttypesofusbs" border="0"></a>
</p>
Unfortunately to my knowledge the ATtiny85 is only recognized in a USB 2.0 (the black thingy) port. If it's white it might work. If you don't have a device with USB 2.0, you unfortunately have to buy a USB 3.0 to 2.0 cable or adapter. However, you might just have a USB to USB cord in your house that works (I didn't but a friend did so that was great).

### Making Sure with a Digital Check
Open the windows menu, then search for device manager and open it. Unplug and replug the board in. This is so that the device is obvious to your computer. When you plug it in, for the first 5 seconds it is in programmable/obvious/reading mode, but after that it goes into write mode. Right now write mode won't do anything because it isn't programmed at all. Just unplug+replug, then look at device manager. Once you are on this list you want to look for an unknown device like in the picture below.
<p align="center">
<a><img src="https://howtomanagedevices.com/wp-content/uploads/2021/01/image-62.png" alt="unknown device" border="0"></a>
</p>
So freshly plugged in you want the yellow warning shape and it should say unknown device, you may have to go to the top of the device manager and click view, and then show hidden devices, but probably not. <strong>If you don't have this unknown device WITH THE YELLOW TRIANGLE, your computer doesn't recognize the device.</strong> (so you need to get an adapter/cord). If you don't have the yellow thing but an unknown device it's likely just always chilling there because its some secret thing in the depths of your computer and you need to get an adapter/cord.

## Putting Drivers on this Bad Boy
### Get the drivers
Firstly you need to download the ATtiny85 drivers so that you can put them on the device. Now click this [GitHub link](https://github.com/LilyGO/DigiSpark-ATtiny85-driver-install) and download the circled driver file in the image (Digistump.Drivers.zip).
<p align="center">
<a href="https://ibb.co/XfRbVzL8"><img src="https://i.ibb.co/JWJKCztQ/Untitled-design-1.png" alt="Digistump.Drivers.zip" border="0"></a>
</p>
 Now open your files, then go to downloads and unzip/extract the driver folder. Then you want to look through the folder until you see "DPinst64". Run it by double-clicking and then following it's instructions. Then you're done!
<p align="center">
<a><img src="https://i.ibb.co/DfJmxfb4/Untitled-design-2.png" alt="Untitled-design-2" border="0"></a>
 </p>
<br>

### Put the drivers on the Device
To put these drivers on your ATtiny85, go back to device manager. Find the unknown device with the yellow triangle again. Then right click on it. Now select update drivers or install drivers, either is fine. It will ask if you want it to search automatically for drivers, or if you want to browse and manually pick the drivers. Select "browse my computer for drivers". Now locate the Folder that you unzipped earlier and pick it. Once you return to the Device manager window make sure that "include subfolders" is checked so that all the driver files are used. Then select to put the drivers onto it. If done correctly, when you close and Re-open task manager there should be a new category called "libUSB-Win32 Devices". This means everything has been done correctly and you are ready for Arduino IDE.

# Arduino Setup

## Installing Arduino IDE
Now you need to download the Arduino software. This is where you will make, paste, and upload payloads to the ATtiny85. Here is the link to the [previous Arduino releases for download](https://www.arduino.cc/en/software/OldSoftwareReleases). I am using version <strong>1.8.18</strong>, but versions 1.6.9->1.8.18 should work with this tutorial. You need to click the Windows installer, and then follow it's instructions.
Now that you have downloaded the program you can open it.
