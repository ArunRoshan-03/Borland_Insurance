TC_03_select_automobile_type()
{
	lr_start_transaction("TC_03_select_automobile_type");

	lr_param_sprintf("p_zipcode", "%06d", rand() % 1000000);

	web_reg_save_param_regexp(
		"ParamName=C_vehicle_type",
		"RegExp=value=\"(.*?)\" /><label for=\"autoquote:vehicle:",
		"NotFound=warning",
		"Ordinal=All",
		SEARCH_FILTERS,
		"Scope=BODY",
		"RequestUrl=*/quote_auto.jsf*",
		LAST);

	web_reg_save_param_regexp(
		"ParamName=C_viewstate",
		"RegExp=id=\"javax.faces.ViewState\" value=\"(.*?)\" />",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=BODY",
		"RequestUrl=*/quote_auto.jsf*",
		LAST);

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
		
		random_vehicle_type =lr_paramarr_random("C_vehicle_type");
		lr_param_sprintf("P_random_vehicle_type","%s",random_vehicle_type);	

	web_reg_save_param_regexp(
		"ParamName=C_gender",
		"RegExp=value=\"(.*?)\" /><label for=\"autoquote:gender",
		"Ordinal=All",
		SEARCH_FILTERS,
		"Scope=BODY",
		"RequestUrl=*/quote_auto.jsf",
		LAST);
	
	web_reg_save_param_regexp(
		"ParamName=C_driving_record",
		"RegExp=value=\"(.*?)\" /><label for=\"autoquote:type",
		"Ordinal=All",
		SEARCH_FILTERS,
		"Scope=BODY",
		"RequestUrl=*/quote_auto.jsf",
		LAST);

	web_reg_find("Fail=NotFound",
		"Search=Body",
		"Text=Automobile Instant Quote",
		LAST);

	web_reg_find("Fail=NotFound",
		"Search=Body",
		"Text=Instant Auto Quote - Continued",
		LAST);

	web_submit_data("quote_auto.jsf_2",
		"Action=https://demo.borland.com/InsuranceWebExtJS/quote_auto.jsf",
		"Method=POST",
		"EncodeAtSign=YES",
		"RecContentType=text/html",
		"Referer=https://demo.borland.com/InsuranceWebExtJS/quote_auto.jsf",
		"Snapshot=t66.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=autoquote", "Value=autoquote", ENDITEM,
		"Name=autoquote:zipcode", "Value={p_zipcode}", ENDITEM,
		"Name=autoquote:e-mail", "Value={email_id}", ENDITEM,
		"Name=autoquote:vehicle", "Value={P_random_vehicle_type}", ENDITEM,
		"Name=autoquote:next.x", "Value=60", ENDITEM,
		"Name=autoquote:next.y", "Value=12", ENDITEM,
		"Name=javax.faces.ViewState", "Value={C_viewstate}", ENDITEM,
		LAST);

		random_gender =lr_paramarr_random("C_gender");
		lr_param_sprintf("P_random_gender","%s",random_gender);	
		
		random_driving_record =lr_paramarr_random("C_driving_record");
		lr_param_sprintf("P_random_driving_record","%s",random_driving_record);	
		
	 lr_think_time(think_time);
	 lr_end_transaction("TC_03_select_automobile_type", LR_AUTO);
	return 0;
}
