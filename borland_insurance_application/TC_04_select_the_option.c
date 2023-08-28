TC_04_select_the_option()
{
	lr_start_transaction("TC_04_select_the_option");
	
	random_age = rand() % 18 + 22;
	lr_param_sprintf("P_age", "%02d", random_age);

	web_reg_save_param_regexp(
		"ParamName=C_financial_info",
		"RegExp=value=\"(.*?)\" /><label for=\"autoquote:finInfo",
		"Ordinal=All",
		SEARCH_FILTERS,
		"Scope=BODY",
		"RequestUrl=*/quote_auto2.jsf",
		LAST);

	web_reg_find("Fail=NotFound",
		"Search=Body",
		"Text=  Last Screen! Give us some information about your automobile.",
		LAST);

	web_reg_find("Fail=NotFound",
		"Search=Body",
		"Text=Instant Auto Quote - Continued",
		LAST);

	web_submit_data("quote_auto2.jsf", 
		"Action=https://demo.borland.com/InsuranceWebExtJS/quote_auto2.jsf", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://demo.borland.com/InsuranceWebExtJS/quote_auto.jsf", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=autoquote", "Value=autoquote", ENDITEM, 
		"Name=autoquote:age", "Value={P_age}", ENDITEM, 
		"Name=autoquote:gender", "Value={P_random_gender}", ENDITEM, 
		"Name=autoquote:type", "Value={P_random_driving_record}", ENDITEM, 
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
		random_financial_type= lr_paramarr_random("C_financial_info");
		lr_param_sprintf("P_financial_type","%s",random_financial_type);		
	
	lr_think_time(think_time);
	lr_end_transaction("TC_04_select_the_option", LR_AUTO);
	return 0;
}
