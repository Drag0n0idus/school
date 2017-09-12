function listOfAnimals(data, start, count){
    try { 
        if(isNaN(start) || isNaN(count)) throw "Not a number";
        if(start < 0) throw "Can't be less than 0";
        if(start > data.length || (start + count) > data.length) throw "Can't be bigger than " + data.length;
    }
    catch(err) {
        return '<div>Error: ' + err + '.</div>';
    }
    var list = [];
    for(var i = start; i < (count + start); i++){
        list.push(data[i]);
    }
    return (list.lenght > 0) ? list : '<p>No items.</p>';
}

console.log(listOfAnimals(json, 0, 0));