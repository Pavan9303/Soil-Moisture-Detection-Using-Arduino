# Soil-Moisture-Detection-Using-Arduino
***
### ABSTRACT
***
Persistent increase in population of world is demanding more and more oxygen levels in the air
which made people to maintain plants in their homes. Due to busy life now a days people are
on a rush in their works which made them difficult to maintain their homes. It is important to
know moisture levels in soil to maintain its healthy status. Our research work in this paper
focuses on home-made low cost moisture sensor with accuracy. In this paper we present a
method to manufacture soil moisture sensor to estimate moisture content in soil hence by
providing information about required water supply required by telling them the moisture
content in the soil. This sensor is tested with several samples of soil and able to meet
considerable accuracy. Measuring soil moisture is an effective way to determine condition of
soil and get information about the quantity of water that need to be supplied for cultivation.
Two separate methods are illustrated in this to determine soil moisture in the soil.  
There are three different types of LED’s and a sound sensor which indicates the user about the
moisture content in the soil. For blind people, we kept a sound sensor which starts ringing when
there is low moisture in soil. 
***
### INTRODUCTION
***
India is a developing nation with a very large population. Due to increasing population, the
basic need such as food and water is increasing day by day. Thus there is a need of saving these
resources and utilize them in an efficient manner. Since water is one of the most important
elements in our daily life, thus we must use efficient ways to utilize water and save it for future
generations. One of method is efficient irrigation management practices for fields. Irrigation
water management practices could greatly benefit by the knowledge of moisture in the soil.
To determine the soil moisture we have designed and developed a nickel probes based
soil moisture sensor and a response monitoring system. By knowing the moisture value,
we can estimate when to water and how much to water the fields so that there is no overwatering or wilting of crops. These practices will increase crop yield, improve quality of
crops, conserve water resources, save energy, and decrease fertilizer supplies  
Farming is one of the essential part of life. Essential part of farming is soil and water. Due to
insufficient availability of water, Many plants are dying. Moderate soil moisture is an important
condition for plant growth. Too much or lack of water will affect plant growth. As moisture
availability declines, the normal function and growth of plants are disrupted, and crop yields
are reduced. And, as our climate changes, moisture availability is becoming more variable.
These make us to come up with these project. Finding the amount of water present in the plant
, from that we can easily send an notification to user regarding water level. Then user can water
the plants.  
Our project is based on “Soil Moisture Detection”, which is very useful for home garden, for
backyard with turf and for farmers. Users can monitor their soil moisture level for their plants
growth because plants growth is affected by soil moisture level. Soil moisture sensors measure
the water content in the soil and can be used to estimate the amount of stored water in the soil
horizon. Soil moisture sensors do not measure water in the soil directly. Instead, they measure
changes in some other soil property that is related to water content in a predictable way. This
soil moisture sensor components can be replace if the component is broken. Besides, the price
of the components used is cheap. There are also some innovation made from the existing
product.   
***
### PROBLEM DEFINITION
***
As we all know that farming is one of the essential part of life. Essential part of farming is soil
and water. Due to insufficient availability of water, Many plants are dying. Moderate soil
moisture is an important condition for plant growth. Too much or lack of water will affect plant
growth. As moisture availability declines, the normal function and growth of plants are
disrupted, and crop yields are reduced.  
Our project is based on “Soil Moisture Detection”, which is very useful for home garden, for
backyard with turf and for small farmers.  
Soil moisture sensors measure or estimate the amount of water in the soil. These sensors can
be stationary or portables such as handheld probes. Stationary sensors are placed at the
predetermined locations and depths in the field, whereas portable soil moisture probes can
measure soil moisture at several locations.  
Soil moisture sensors aid good irrigation management. Good irrigation management gives
better crops, uses fewer inputs, and increases profitability. Soil moisture sensors help irrigators
to understand what is happening in the root zone of a crop.  
The moisture of the soil plays an essential role in the gardens for plants. As nutrients in the soil
provide the food to the plants for their growth. Supplying water to the plants is also essential
to change the temperature of the plants. The temperature of the plant can be changed with water
using the method like transpiration. And plant root systems are also developed better when
rising within moist soil. Extreme soil moisture levels can guide to anaerobic situations that can
encourage the plant’s growth as well as soil pathogens.  
The soil moisture detector is used mostly used for gardeners. It detects the amount of moisture
in the soil and helps the irrigators to understand when to water the crop which helps the soil to
be fertile and increases the profit to them and they can also save the crop or plants from dying
. These sensors normally used to check volumetric water content, and another group of
sensors calculates a new property of moisture within soils named water potential and there by
displays the level of moisture in the soil which helps the irrigators to understand when to
water the plant or crop.   

***
### OBJECTIVES
***
The objective of this project is to:  
• Soil moisture sensors measure estimates the amount of water in the soil.  
• Make the components used can be easily replaced if there are defects occur.  
• Make a budget soil moisture sensor.  
• These sensors can be stationary or portables such as handheld probes, portable soil
moisture probes can measure soil moisture at several locations.  
• This Soil Moisture product should benefit a wide range of applications and users.  
• The main objective of this is to provide a budget friendly moisture detector in the soil
for plants in the home or at work to estimate the amount of required for the plant to
maintain its healthy status.  
• The moisture content of the soil is used to express the phase relationships of water, air,
and solids in a given volume or weight of the material. For cohesive soil, the consistency
of a given soil, along with its liquid and plastic limits is used to express its relative
consistency.  
• The moisture of the soil periodically throughout the user-selected time period. It will
report the measured data to the user through a statistical interface which will allow for
data analysis  

***
### METHODOLOGY
***
The Soil Moisture Sensor uses capacitance to measure dielectric permittivity of the surrounding
medium. In soil, dielectric permittivity is a function of the water content. The sensor creates a
voltage proportional to the dielectric permittivity, and therefore the water content of the soil.  
The sensor averages the water content over the entire length of the sensor. There is a 2 cm zone
of influence with respect to the flat surface of the sensor, but it has little or no sensitivity at the
extreme edges. The figure above shows the electromagnetic field lines along a cross-section of
the sensor, illustrating the 2 cm zone of influence.    
  
<img width="315" alt="image" src="https://github.com/20BCI7021/Soil-Moisture-Detection-Using-Arduino/assets/113836642/1a800e59-9c31-4670-ae0a-b27105810d9d">  

The soil moisture sensor consists of two probes which are used to measure the volumetric
content of water. The two probes allow the current to pass through the soil and then it gets the
resistance value to measure the moisture value.    
 
When there is more water, the soil will conduct more electricity which means that there will be
less resistance. Therefore, the moisture level will be higher. Dry soil conducts electricity
poorly, so when there will be less water, then the soil will conduct less electricity which means
that there will be more resistance. Therefore, the moisture level will be lower.  
This sensor can be connected in two modes: Analog mode and digital mode. First, we will
connect it in Analog mode and then we will use it in Digital mode.  
<img width="257" alt="image" src="https://github.com/20BCI7021/Soil-Moisture-Detection-Using-Arduino/assets/113836642/651023ec-ef9b-41d3-b489-471ede01e76b">   

The connections for connecting the soil moisture sensor FC-28 to the Arduino are as follows.  
VCC of FC-28 to 5V of Arduino
GND of FC-28 to GND of Arduino
A0 of FC-28 to A0 of Arduino  
<img width="290" alt="image" src="https://github.com/20BCI7021/Soil-Moisture-Detection-Using-Arduino/assets/113836642/d4dc9347-a045-4e40-a121-a8c2cde6cdb2">  

***
### RESULTS AND DISCUSSION
***
As we observe in the results, Red light will glow for low moisture, white light for average
moisture and green for high moisture.  
And also we have display board that shows exact reading of the moisture content in the soil
which gives a good idea for the user to know the amount of water required to add it to the plant.  
<img width="313" alt="image" src="https://github.com/20BCI7021/Soil-Moisture-Detection-Using-Arduino/assets/113836642/851142b4-54b7-4b82-af49-24cb474818ea">  

<img width="294" alt="image" src="https://github.com/20BCI7021/Soil-Moisture-Detection-Using-Arduino/assets/113836642/418dd424-1621-4ce4-b3ca-2836cfc4aeda">  

Here we observe that we got green light which indicates us that the water level is sufficient and
the plant is healthy.  
<img width="295" alt="image" src="https://github.com/20BCI7021/Soil-Moisture-Detection-Using-Arduino/assets/113836642/8cafd2dd-325b-448f-9b55-eff7dc29788b">  



Here in the above images we got medium level(yellow light) of water content present in it and
we need to add water to the soil so that the plant may not die.  
<img width="294" alt="image" src="https://github.com/20BCI7021/Soil-Moisture-Detection-Using-Arduino/assets/113836642/9414df41-67ea-4fdc-bc39-06c4e2524c99">  
<img width="287" alt="image" src="https://github.com/20BCI7021/Soil-Moisture-Detection-Using-Arduino/assets/113836642/4128c161-d47b-454b-b218-d74638296506">



Coming to these images we can clearly see that it is indicating red light and the display is
displaying low water content in the soil, this leads to plants death.   

***
### CONCLUSION
***

Droughts usually last long and seriously affect large agricultural areas in China. China has paid
great attention to droughts by developing drought monitoring technology to alleviate drought
impacts. The combination of remote sensing techniques with GIS and some conventional
methods are effective ways to monitor drought in China. However, further research is needed
to improve the present setup of the drought monitoring system at the national level.  
Monitoring soil moisture will not only benefit environmental researchers but farmers, golf
course superintendents, archeologists, and regulators. Soil moisture sensors play an important
role in helping to protect water resources and understand our ever changing climate.  
Water stress is not constant throughout the growing period, but varies in magnitude at different
periods, thus relative yield fractions requires to be calculated at smaller time steps. In MABIA
method relative yield fractions is calculated on daily time step, and aggregated for the season,
is useful in estimating the yield accurately.  
Soil moisture balance computation on daily basis plays an important role, for evaluation of
irrigation scheduling, crop yield, and recharge to groundwater. The daily variation in soil
surface wetness, soil moisture profile, due to frequent or light wetting, because of rainfall and
irrigation has a significant impact on crop evapotranspiration.  
Less water can be modified to lower and higher thresholds to preserve ideal soil moisture
saturation and reduce plant withering.
