echo "Enter 1 for Station : "
echo "Enter 2 for Air Quality : "
echo "Enter 3 for O3 Quality : "
echo "Enter 4 for O3 Value : "
echo "Enter 5 for NO2 Quality : "
echo "Enter 6 for NO2 Value : "
echo "Enter 7 for PM10 Quality : "
echo "Enter 8 for PM10 Value : "
echo "Enter 9 for Date : "

read choice

if [ "$choice" -eq 1 ];then echo "Enter Station name:\n%s";read value;awk -v data="$value" -F',' '$1 ~ data' air_quality_Nov2017.csv

elif [ "$choice" -eq 2 ];then echo "Enter Air Quality:\n%s";read value;awk -v data="$value" -F',' '$2 ~ data' air_quality_Nov2017.csv

elif [ "$choice" -eq 3 ];then echo "Enter O3 Quality : ";read value;awk -v data="$value" -F, '$6 ~ data' air_quality_Nov2017.csv

elif [ "$choice" -eq 4 ];then echo "Enter O3 Value : ";read value;awk -v data=$value -F, '$7 == data' air_quality_Nov2017.csv

elif [ "$choice" -eq 5 ];then echo "Enter NO2 Quality : ";read value;awk -v data="$value" -F, '$9 ~ data' air_quality_Nov2017.csv

elif [ "$choice" -eq 6 ];then echo "Enter NO2 Value : ";read value;awk -v data=$value -F, '$10 == data' air_quality_Nov2017.csv

elif [ "$choice" -eq 7 ];then echo "Enter PM10 Quality : ";read value;awk -v data="$value" -F, '$12 ~ data' air_quality_Nov2017.csv

elif [ "$choice" -eq 8 ];then echo "Enter PM10 Value : ";read value;awk -v data=$value -F, '$13 == data' air_quality_Nov2017.csv

elif [ "$choice" -eq 9 ];then echo "Enter Date : ";read value;grep $value air_quality_Nov2017.csv

else echo "Please enter valid entry !!"
fi