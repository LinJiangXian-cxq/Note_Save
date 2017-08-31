open_idex()
{

	web_url("www2.swust.edu.cn", 
		"URL=http://www2.swust.edu.cn/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/_css/_system/system_editor.css", ENDITEM, 
		"Url=/_upload/tpl/00/10/16/template16/extends/libs/jquery.sudy.js", ENDITEM, 
		"Url=/_upload/tpl/00/10/16/template16/images/logo_bg.jpg", ENDITEM, 
		"Url=/_upload/tpl/00/10/16/template16/images/main-t-161108_07.jpg", ENDITEM, 
		"Url=/_upload/tpl/00/10/16/template16/images/top_menu_1_03.jpg", ENDITEM, 
		"Url=/_upload/tpl/00/10/16/template16/css/img/menu-icon-arrow.png", ENDITEM, 
		"Url=/_upload/tpl/00/10/16/template16/css/img/menu-icon-arrow-white.png", ENDITEM, 
		"Url=/_upload/tpl/00/10/16/template16/images/list_1_38.jpg", ENDITEM, 
		"Url=/_upload/tpl/00/10/16/template16/images/footer_bg.jpg", ENDITEM, 
		"Url=/_upload/tpl/00/10/16/template16/images/aq_03.png", ENDITEM, 
		"Url=/_upload/tpl/00/10/16/template16/images/wx_logo_05.png", ENDITEM, 
		"Url=/_upload/customPortletMode/00/c3/195/css/opacity.png", ENDITEM, 
		"Url=/_upload/customPortletMode/00/c3/195/images/next.png", ENDITEM, 
		"Url=/_upload/customPortletMode/00/c3/195/images/prev.png", ENDITEM, 
		"Url=/_upload/tpl/00/10/16/template16/css/img/menu-switch-arrow.png", ENDITEM, 
		LAST);

	web_custom_request("_visitcountdisplay", 
		"URL=http://www2.swust.edu.cn/_visitcountdisplay?articleIds=&siteId=2&funType=0", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://www2.swust.edu.cn/", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("_visitcountdisplay_2", 
		"URL=http://www2.swust.edu.cn/_visitcountdisplay?siteId=2&type=1&dispMode=5&statMode=1&showDate=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www2.swust.edu.cn/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("_visitcountdisplay_3", 
		"URL=http://www2.swust.edu.cn/_visitcountdisplay?articleIds=&siteId=2&funType=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://www2.swust.edu.cn/", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	return 0;
}
