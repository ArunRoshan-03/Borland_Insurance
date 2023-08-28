TC_04_select_the_option()
{

	lr_think_time(33);

	web_submit_data("quote_auto2.jsf", 
		"Action=https://demo.borland.com/InsuranceWebExtJS/quote_auto2.jsf", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://demo.borland.com/InsuranceWebExtJS/quote_auto.jsf", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=autoquote", "Value=autoquote", ENDITEM, 
		"Name=autoquote:age", "Value=23", ENDITEM, 
		"Name=autoquote:gender", "Value=Male", ENDITEM, 
		"Name=autoquote:type", "Value=Fair", ENDITEM, 
		"Name=autoquote:next.x", "Value=52", ENDITEM, 
		"Name=autoquote:next.y", "Value=6", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id4:j_id6", ENDITEM, 
		EXTRARES, 
		"Url=ext/resources/images/default/form/text-bg.gif", "Referer=https://demo.borland.com/InsuranceWebExtJS/ext/resources/css/ext-all.css", ENDITEM, 
		"Url=ext/resources/images/default/form/trigger.gif", "Referer=https://demo.borland.com/InsuranceWebExtJS/ext/resources/css/ext-all.css", ENDITEM, 
		LAST);

	web_url("carMakeData.jsf", 
		"URL=https://demo.borland.com/InsuranceWebExtJS/data/carMakeData.jsf?_dc=1693204973639", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://demo.borland.com/InsuranceWebExtJS/quote_auto2.jsf", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
