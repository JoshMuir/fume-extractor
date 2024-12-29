Day 1: 

printed a fan holder that would be suitable for my needs, except it was designed for a noctua. 

tried it and because the noctua has smoother edges, the fan didnt fit. 
tomorrow i will dremel the edges of my fan down and try make it fit since that is easier than redesigning and printing a holder. 

As a temp measure i printed the next part i needed as 2% larger, however decided it wouldn't work. 

bought some filters that are a bit smaller than i anticipated. will need to design the housing to step down into that size. 

I remember from a video i watched where a guy was preaching about exploiting the 'tolerance' of one material to use as a feature of your design. I think i want to implement this by exploiting a squishy material to induce that airtightness i need. 

Day 2: 

Dremeled the fan down and made it fit, beautifully snug. 
soldered some headers onto a stepdown converter to test. 

I used a 12V power brick with a dc power jack to connect to the stepdown converter. 

My initial reading of the output was 13.8 volt, which i thought was quite strange since i only had a 12v brick. 
After turning the pot a couple of times and having no change in voltage, i measured the 12v supply and found that it actually had been outputting 15v. 

Found a new power brick which advertised 12v and found - about 12.3v. hooray. 

measured the output of the stepdown converter and was delighted to find a voltage less than the expected input. 
after turning for an absurdly long time, finally the worlds brightest LED turned off and i realised i had made progress. 
adjusted to ~3.2v for my mcu 


Fan test run: 

Initially setup as DC mode control, with Pin 2 connected to the output of the stepdown. 
We were running!  
Hooked up a wire to the sense pin and was reading about 0.5v when power was not enough, 0.27-0.3v during runm no matter what speed. 

Next time i've changed it around like so.
12v -> fan 
gnd
sense -> floating 
speed control -> gnd 


using arduino and a simple counting up script, i verified that the pwm output of the esp32 can alter the speed of the fan. success!


end of day report: 

3d print finished, attached duct adapter and tested airflow direction. 
i have installed it the wrong way around but it might be fine since the duct adapter fits quite nicely to the air intake. 