function getAKContent() {
return '<!-- This Discovery Window is in silent mode. -->\r\n'
;
}

if(window.recordRoundTripExecutionTime) recordRoundTripExecutionTime();
var akAnchor = document.getElementById('akAPI');
var akContent = getAKContent();
if(akContent != null && akAnchor != null) akAnchor.innerHTML = akContent;
if(akAnchor == null) log('AK anchor tag could not be found. Searched for the ID akAPI.');if(window.onAKLoad) onAKLoad(); 
    if(window.notifyAKDebugConsoleOfLoading) notifyAKDebugConsoleOfLoading();
