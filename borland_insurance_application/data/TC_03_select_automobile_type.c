TC_03_select_automobile_type()
{

	lr_think_time(11);

	web_url("quote_auto.jsf", 
		"URL=https://demo.borland.com/InsuranceWebExtJS/quote_auto.jsf", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://demo.borland.com/InsuranceWebExtJS/index.jsf", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=images/css-nav.gif", "Referer=https://demo.borland.com/InsuranceWebExtJS/css/style.css", ENDITEM, 
		LAST);

	lr_think_time(7);

	web_url("classify_client_2", 
		"URL=https://classify-client.services.mozilla.com/api/v1/classify_client/", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(14);

	web_submit_data("quote_auto.jsf_2", 
		"Action=https://demo.borland.com/InsuranceWebExtJS/quote_auto.jsf", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://demo.borland.com/InsuranceWebExtJS/quote_auto.jsf", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=autoquote", "Value=autoquote", ENDITEM, 
		"Name=autoquote:zipcode", "Value=620001", ENDITEM, 
		"Name=autoquote:e-mail", "Value=udemo@gmail.com", ENDITEM, 
		"Name=autoquote:vehicle", "Value=car", ENDITEM, 
		"Name=autoquote:next.x", "Value=60", ENDITEM, 
		"Name=autoquote:next.y", "Value=12", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id4:j_id5", ENDITEM, 
		LAST);

	return 0;
}
