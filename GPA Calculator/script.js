
function inputCount(perc){
    if(perc.value > 0) {return 1;}
    else {return 0;}
}

function inputNumb(numb,perc){
    var dec = perc.value / 100;
    return numb.value*dec;
}
function needed(average,percentageLeft,percentageTotal,grade){

    return ((grade*100) - (100-percentageLeft)*average)/(percentageLeft);
}

function validNumb(numb, t){
    var ch = /^[0-9]{1,3}.{0,2}[0-9]{0,2}$/;
    var ch2 = /^$/;

        if(numb.value.match(ch)) {
            numb.value = parseFloat(numb.value).toFixed(2);
            return true;
        } else if(numb.value.match(ch2)) {
            numb.value = parseFloat(0).toFixed(2);
            return true;
        } else {
            alert(t);
            numb.focus();
            return false;
        }
}

function valid(){

    var nGrade1 = document.getElementById('grade1');
    var nPerce1 = document.getElementById('perce1');
    var nGrade2 = document.getElementById('grade2');
    var nPerce2 = document.getElementById('perce2');
    var nGrade3 = document.getElementById('grade3');
    var nPerce3 = document.getElementById('perce3');
    var nGrade4 = document.getElementById('grade4');
    var nPerce4 = document.getElementById('perce4');
    var nGrade5 = document.getElementById('grade5');
    var nPerce5 = document.getElementById('perce5');
    var nGrade6 = document.getElementById('grade6');
    var nPerce6 = document.getElementById('perce6');
    var nGrade7 = document.getElementById('grade7');
    var nPerce7 = document.getElementById('perce7');
    var nGrade8 = document.getElementById('grade8');
    var nPerce8 = document.getElementById('perce8');
    var nGrade9 = document.getElementById('grade9');
    var nPerce9 = document.getElementById('perce9');
    var nGrade10 = document.getElementById('grade10');
    var nPerce10 = document.getElementById('perce10');
       if (
            validNumb(nGrade1, 'Invalid inputg1') &&
            validNumb(nGrade2, 'Invalid inputg2') &&
            validNumb(nGrade3, 'Invalid inputg3') &&
            validNumb(nGrade4, 'Invalid inputg4') &&
            validNumb(nGrade5, 'Invalid inputg5') &&
            validNumb(nGrade6, 'Invalid inputg6') &&
            validNumb(nGrade7, 'Invalid inputg7') &&
            validNumb(nGrade8, 'Invalid inputg8') &&
            validNumb(nGrade9, 'Invalid inputg9') &&
            validNumb(nGrade10,'Invalid inputg10') &&
            validNumb(nPerce1, 'Invalid input1') &&
            validNumb(nPerce2, 'Invalid input2') &&
            validNumb(nPerce3, 'Invalid input3') &&
            validNumb(nPerce4, 'Invalid input4') &&
            validNumb(nPerce5, 'Invalid input5') &&
            validNumb(nPerce6, 'Invalid input6') &&
            validNumb(nPerce7, 'Invalid input7') &&
            validNumb(nPerce8, 'Invalid input8') &&
            validNumb(nPerce9, 'Invalid input9') &&
            validNumb(nPerce10,'Invalid input10')){
                   var g1 = inputNumb(nGrade1, nPerce1);
                   var g2 = inputNumb(nGrade2, nPerce2);
                   var g3 = inputNumb(nGrade3, nPerce3);
                   var g4 = inputNumb(nGrade4, nPerce4);
                   var g5 = inputNumb(nGrade5, nPerce5);
                   var g6 = inputNumb(nGrade6, nPerce6);
                   var g7 = inputNumb(nGrade7, nPerce7);
                   var g8 = inputNumb(nGrade8, nPerce8);
                   var g9 = inputNumb(nGrade9, nPerce9);
                   var g10 = inputNumb(nGrade10,nPerce10);
                   var percentageTotal = (nPerce1.value*1 + nPerce2.value*1 + nPerce3.value*1 + nPerce4.value*1 + nPerce5.value*1 + nPerce6.value*1 + nPerce7.value*1 + nPerce8.value*1 + nPerce9.value*1 + nPerce10.value*1);
                   var count = inputCount(nPerce1) + inputCount(nPerce2) + inputCount(nPerce3) + inputCount(nPerce4) + inputCount(nPerce5) + inputCount(nPerce6) + inputCount(nPerce7) + inputCount(nPerce8) + inputCount(nPerce9) + inputCount(nPerce10);

                   if( percentageTotal <= 100){
                      var percentageLeft = 100 - percentageTotal;
                      var average = (nGrade1.value*(nPerce1.value/100) + nGrade2.value*(nPerce2.value/100) + nGrade3.value*(nPerce3.value/100) + nGrade4.value*(nPerce4.value/100) + nGrade5.value*(nPerce5.value/100) + nGrade6.value*(nPerce6.value/100)
                      + nGrade7.value*(nPerce7.value/100) + nGrade8.value*(nPerce8.value/100) + nGrade9.value*(nPerce9.value/100) + nGrade10.value*(nPerce10.value/100)) / (nPerce1.value/100 + nPerce2.value/100 + nPerce3.value/100 + nPerce4.value/100 +
                           nPerce5.value/100 + nPerce6.value/100 + nPerce7.value/100 + nPerce8.value/100 + nPerce9.value/100 + nPerce10.value/100);

                      var c90 = parseFloat(needed(average,percentageLeft,percentageTotal,90)).toFixed(3);
                      var c85 = parseFloat(needed(average,percentageLeft,percentageTotal,85)).toFixed(3);
                      var c80 = parseFloat(needed(average,percentageLeft,percentageTotal,80)).toFixed(3);
                      var c77 = parseFloat(needed(average,percentageLeft,percentageTotal,77)).toFixed(3);
                      var c73 = parseFloat(needed(average,percentageLeft,percentageTotal,73)).toFixed(3);
                      var c70 = parseFloat(needed(average,percentageLeft,percentageTotal,70)).toFixed(3);
                      var c67 = parseFloat(needed(average,percentageLeft,percentageTotal,67)).toFixed(3);
                      var c63 = parseFloat(needed(average,percentageLeft,percentageTotal,63)).toFixed(3);
                      var c60 = parseFloat(needed(average,percentageLeft,percentageTotal,60)).toFixed(3);
                      var c57 = parseFloat(needed(average,percentageLeft,percentageTotal,57)).toFixed(3);
                      var c53 = parseFloat(needed(average,percentageLeft,percentageTotal,53)).toFixed(3);
                      var c50 = parseFloat(needed(average,percentageLeft,percentageTotal,50)).toFixed(3);

                      mark1.textContent = c90;
                      mark2.textContent = c85;
                      mark3.textContent = c80;
                      mark4.textContent = c77;
                      mark5.textContent = c73;
                      mark6.textContent = c70;
                      mark7.textContent = c67;
                      mark8.textContent = c63;
                      mark9.textContent = c60;
                      mark10.textContent = c57;
                      mark11.textContent = c53;
                      mark12.textContent = c50;
                      avg.textContent = parseFloat(average).toFixed(3);
                      weight.textContent = parseFloat(percentageTotal).toFixed(3);

       } else {
           alert('percentage > 100');
           return false;
       } return false;
   }
    else { return false;}
}
