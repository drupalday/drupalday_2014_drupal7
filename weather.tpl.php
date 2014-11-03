<img src="http://openweathermap.org/img/w/<?php print $data->weather[0]->icon;?>.png" />
<h3><?php print $data->name;?></h3>
<p><?php print $data->weather[0]->main;?><br/><?php print $data->weather[0]->description;?></p>
