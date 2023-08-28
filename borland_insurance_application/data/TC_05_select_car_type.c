TC_05_select_car_type()
{

	lr_think_time(14);

	web_url("loading.gif", 
		"URL=https://demo.borland.com/InsuranceWebExtJS/ext/resources/images/default/grid/loading.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://demo.borland.com/InsuranceWebExtJS/ext/resources/css/ext-all.css", 
		"Snapshot=t69.inf", 
		LAST);

	web_submit_data("carMakeData.jsf_2", 
		"Action=https://demo.borland.com/InsuranceWebExtJS/data/carMakeData.jsf", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://demo.borland.com/InsuranceWebExtJS/quote_auto2.jsf", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=query", "Value=", ENDITEM, 
		EXTRARES, 
		"Url=../ext/resources/images/default/shadow.png", "Referer=https://demo.borland.com/InsuranceWebExtJS/ext/resources/css/ext-all.css", ENDITEM, 
		"Url=../ext/resources/images/default/shadow-lr.png", "Referer=https://demo.borland.com/InsuranceWebExtJS/ext/resources/css/ext-all.css", ENDITEM, 
		"Url=../ext/resources/images/default/shadow-c.png", "Referer=https://demo.borland.com/InsuranceWebExtJS/ext/resources/css/ext-all.css", ENDITEM, 
		LAST);

	web_url("carModelData.jsf", 
		"URL=https://demo.borland.com/InsuranceWebExtJS/data/carModelData.jsf?carMake=Cadillac&_dc=1693204990494", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://demo.borland.com/InsuranceWebExtJS/quote_auto2.jsf", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("carModelData.jsf_2", 
		"Action=https://demo.borland.com/InsuranceWebExtJS/data/carModelData.jsf?carMake=Cadillac", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://demo.borland.com/InsuranceWebExtJS/quote_auto2.jsf", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=query", "Value=", ENDITEM, 
		LAST);

	lr_think_time(4);

	web_submit_data("quote_auto3.jsf", 
		"Action=https://demo.borland.com/InsuranceWebExtJS/quote_auto3.jsf", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://demo.borland.com/InsuranceWebExtJS/quote_auto2.jsf", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=autoquote", "Value=autoquote", ENDITEM, 
		"Name=autoquote:year", "Value=1999", ENDITEM, 
		"Name=makeCombo", "Value=Cadillac", ENDITEM, 
		"Name=autoquote:make", "Value=Cadillac", ENDITEM, 
		"Name=modelCombo", "Value=Escalade", ENDITEM, 
		"Name=autoquote:model", "Value=Escalade", ENDITEM, 
		"Name=autoquote:finInfo", "Value=Finance", ENDITEM, 
		"Name=autoquote:next.x", "Value=46", ENDITEM, 
		"Name=autoquote:next.y", "Value=12", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id4:j_id7", ENDITEM, 
		LAST);

	return 0;
}
