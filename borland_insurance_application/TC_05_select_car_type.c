TC_05_select_car_type()
{	
	lr_start_transaction("TC_05_select_car_type");

	web_reg_save_param_regexp(
		"ParamName=C_car_name",
		"RegExp=\"Make\":\"(.*?)\"",
		"Ordinal=All",
		SEARCH_FILTERS,
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

	web_reg_save_param_regexp(
		"ParamName=C_car_model",
		"RegExp=\"Make\":\"(.*?)\"",
		"Ordinal=All",
		SEARCH_FILTERS,
		LAST);

	web_url("carModelData.jsf", 
		"URL=https://demo.borland.com/InsuranceWebExtJS/data/carModelData.jsf?carMake=Cadillac&_dc=1693204990494", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://demo.borland.com/InsuranceWebExtJS/quote_auto2.jsf", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		LAST);
	
		car_name_count = lr_paramarr_len("C_car_name");
		car_car_model = lr_paramarr_len("C_car_model");
		selectedCarModel = lr_eval_string(lr_paramarr_idx("C_car_model", rand() % atoi(lr_eval_string("{C_car_model_count}")) + 1));
		lr_param_sprintf("P_selectedCarModel","%s",selectedCarModel);
			
		gender = lr_eval_string("{P_random_gender}");
			if (strcmp(gender, "Female") == 0) {
			    int randomValue = rand() % 2;
			    selectedCar = (randomValue == 0) ? "Cadillac" : "Lexus";
			} else if (strcmp(gender, "Male") == 0) {
			    int randomValue = rand() % 4;
			    switch (randomValue) {
			        case 0:
			            selectedCar = "Buick";
			            break;
			        case 1:
			            selectedCar = "Chrysler";
			            break;
			        case 2:
			            selectedCar = "Toyota";
			            break;
			        case 3:
			            selectedCar = "Pontiac";
			            break;
			    }
			}
		lr_param_sprintf("P_selected_car","%s",selectedCar);

	web_submit_data("carModelData.jsf_2", 
		"Action=https://demo.borland.com/InsuranceWebExtJS/data/carModelData.jsf?carMake={P_selected_car}", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://demo.borland.com/InsuranceWebExtJS/quote_auto2.jsf", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=query", "Value=", ENDITEM, 
		LAST);

	web_reg_find("Fail=NotFound",
		"Search=Body",
		"Text=Based on the following information that you provided",
		LAST);

	web_reg_find("Fail=NotFound",
		"Search=Body",
		"Text=Personal Information",
		LAST);

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
		"Name=makeCombo", "Value={P_selected_car}", ENDITEM, 
		"Name=autoquote:make", "Value={P_selected_car}", ENDITEM, 
		"Name=modelCombo", "Value={P_selectedCarModel}", ENDITEM, 
		"Name=autoquote:model", "Value={P_selectedCarModel}", ENDITEM, 
		"Name=autoquote:finInfo", "Value={P_financial_type}", ENDITEM, 
		"Name=autoquote:next.x", "Value=46", ENDITEM, 
		"Name=autoquote:next.y", "Value=12", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id4:j_id7", ENDITEM, 
		LAST);

	lr_think_time(think_time);
	lr_end_transaction("TC_05_select_car_type", LR_AUTO);
	return 0;
}
