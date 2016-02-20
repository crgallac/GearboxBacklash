# Examining Encoder resolution and the effects of gearbox backlash

Using a gearbox for a haptic appilcation can be tempting because of the desire to achieve high forces at the and point of the device at a low cost. However, there are pitfalls associated with the gearbox that include backdrivability, inertia amplification, and gearbox backlash. Here I focus on the effects of gearbox backlash on the encoder resolution. You can see it in the video here:

https://www.youtube.com/watch?v=MsCI_gxyXhg

I use an API I adapted to work with the Arduino DUE. It's still a little buggy ( I think it's a product of the SPI communication not sending all the data) but works well for the most part. You can find that here: 
https://github.com/crgallac/AS5048A_DUE