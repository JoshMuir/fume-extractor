# Fume extractor

## Options

- Small Benchtop fan
- Larger boxy with ducting

## Concerns

Larger boxy with ducting

- Power management
  - Will this have to be powered by mains AC? Big implications if so
- Larger filter?
- bigger fan means more noise

Small benchtop fan

- Will this be powerful enough?

## Benefits

Small benchtop fan:

- Can reuse 3d models available online
- quicker to PoC
- Can boost it later
- more achievable

Larger boxy

- More flexible
- seems more robust

## Required Items

### Housing

  I can find and use a fan housing from bambu marketplace.

### Filtering

  I will need a HEPA filter. These can be found on amazon and cut to size.
  Charcoal filter is not appropriate as it will not catch any particulates.
  Using a random filter kit for a roomba-type vacuum robot i found on amazon.
  65x50x20 dimensions.

  PWM Pin definition on MSI H510i.

    1. Ground
    2. +12V
    3. Sense
    4. Speed Control Signal


### Control System

  I have a raspberry pico to control the electronics.
  I will have 12V come in for the fan, so I need to step that down to 3v3 for the pico.
  Fan has speed sense for feedback and PWM input for control. 

### Fan

  I have a spare 120mm PWM fan which I removed from my computer.
  It has a 4 pin connector typically used as a mobo connector. 
  I can find the pinout on the motherboard.

  specs: 
  2000 rpm max 
  65.51 cfm / 111.3 m3/h
  air presusre: 2.23 mm/h20 = 21.87 kPa
  3.6w

## Resources

<https://academic.oup.com/annweh/article/42/8/511/148079?login=true>



## programming 

### MCPWM 

Submodules of the esp MCPWM system

- Prescaler 
- Timer: Configs 
  - Set PWM freq
  - Set mode (count up, count down, count up-down)
  - configure the reloading phase 
  - sync pwm timers 
  - config pwm timer input sync source
  - config pwm timer output sync source
  - config method of period updating 
- Operators
  - PWM Generator 
  - dead time generator 
  - pwm carrier
  - fault handler 
- fault detection 
- capture 
- pwm timer: configs
