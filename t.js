var monitor = require('./AndyLau');

console.log(monitor.list());

monitor.find(function(err, devices) {
	console.log("find: some devices");
});

monitor.on('add', function(devices) { 
	console.log("add USB:", devices); 
	
});

monitor.on('add:vid', function(devices, vid) { 
	
});

monitor.on('add:vid:pid', function(devices) {

});

monitor.on('remove', function(err, devices) {
    console.log("remove USB ");

});

monitor.on('remove:vid', function(err, devices) {

});

monitor.on('remove:vid:pid', function(err, devices) {

});

monitor.on('change', function(err, devices) {
    console.log("change USB");
});

monitor.on('change:vid', function(err, devices) {

});

monitor.on('change:vid:pid', function(err, devices) {

});
