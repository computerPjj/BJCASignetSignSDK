// JavaScript Document

var signImageBase64;

function request(sp ,invoke ,myJSONText)
  {
	// 1 android 2 ios
	try {
		window.signet.transmit(sp,invoke,myJSONText);
	} catch(Excep) {
		 window.location.href = "#/signet?" + invoke + ":?" + myJSONText;
	}

}


function revertScreenCallBack(signImg){
	console.log(signImg);
	signImageBase64=signImg;
}

function getSignImageFromPage(){
	
	return signImageBase64;
}

/**
 * 取消按钮
 */
function signSettingBack(){
	request('signet','signSettingBack','');
}
