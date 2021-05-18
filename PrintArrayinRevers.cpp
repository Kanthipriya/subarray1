<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.1//EN" "http://www.w3.org/TR/xhtml11/DTD/xhtml11.dtd">
<!-- saved from url=(0126)https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/print-array-in-reverse/discussion/ -->
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en"><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <meta name="theme-color" content="#323754">
        <iframe src="javascript:false" title="" style="width: 0px; height: 0px; border: 0px; display: none;" src="./PrintArrayinRevers_files/saved_resource.html"></iframe><script type="text/javascript" src="./PrintArrayinRevers_files/9b2cefefd1"></script><script type="text/javascript" async="" src="./PrintArrayinRevers_files/analytics.js.download"></script><script src="./PrintArrayinRevers_files/nr-1208.min.js.download"></script><script src="./PrintArrayinRevers_files/all.js.download" async="" crossorigin="anonymous"></script><script src="./PrintArrayinRevers_files/cb=gapi.loaded_0" async=""></script><script src="./PrintArrayinRevers_files/2586902.js.download" type="text/javascript" id="hs-analytics"></script><script src="./PrintArrayinRevers_files/2586902.js(1).download" type="text/javascript" id="cookieBanner-2586902" data-cookieconsent="ignore" data-hs-ignore="true" data-loader="hs-scriptloader" data-hsjs-portal="2586902" data-hsjs-env="prod" data-hsjs-hublet="na1"></script><script src="./PrintArrayinRevers_files/conversations-embed.js.download" type="text/javascript" id="hubspot-messages-loader" data-loader="hs-scriptloader" data-hsjs-portal="2586902" data-hsjs-env="prod" data-hsjs-hublet="na1"></script><script src="./PrintArrayinRevers_files/collectedforms.js.download" type="text/javascript" id="CollectedForms-2586902" crossorigin="anonymous" data-leadin-portal-id="2586902" data-leadin-env="prod" data-loader="hs-scriptloader" data-hsjs-portal="2586902" data-hsjs-env="prod" data-hsjs-hublet="na1"></script><script type="text/javascript" async="" src="./PrintArrayinRevers_files/plusone.js.download" gapi_processed="true"></script><script id="twitter-wjs" src="./PrintArrayinRevers_files/widgets.js.download"></script><script src="./PrintArrayinRevers_files/802574803157043" async=""></script><script id="facebook-jssdk" src="./PrintArrayinRevers_files/all.js(1).download"></script><script type="text/javascript" async="" src="./PrintArrayinRevers_files/mixpanel-2-latest.min.js.download"></script><script async="" src="./PrintArrayinRevers_files/fbevents.js.download"></script><script type="text/javascript" async="" src="./PrintArrayinRevers_files/f.txt"></script><script type="text/javascript" async="" src="./PrintArrayinRevers_files/insight.min.js.download"></script><script type="text/javascript" async="" src="./PrintArrayinRevers_files/recaptcha__en.js.download" crossorigin="anonymous" integrity="sha384-flviDSD9v4jk/5R8dfmwuv/TjjtrqG71QqiMHXEdc2uJSKVKau85FnvYQXVXEpRR"></script><script async="" src="./PrintArrayinRevers_files/gtm.js.download"></script><script async="" src="./PrintArrayinRevers_files/analytics.js.download"></script><script type="text/javascript">(window.NREUM||(NREUM={})).loader_config={licenseKey:"9b2cefefd1",applicationID:"672553648"};window.NREUM||(NREUM={}),__nr_require=function(e,t,n){function r(n){if(!t[n]){var i=t[n]={exports:{}};e[n][0].call(i.exports,function(t){var i=e[n][1][t];return r(i||t)},i,i.exports)}return t[n].exports}if("function"==typeof __nr_require)return __nr_require;for(var i=0;i<n.length;i++)r(n[i]);return r}({1:[function(e,t,n){function r(){}function i(e,t,n){return function(){return o(e,[u.now()].concat(c(arguments)),t?null:this,n),t?void 0:this}}var o=e("handle"),a=e(7),c=e(8),f=e("ee").get("tracer"),u=e("loader"),s=NREUM;"undefined"==typeof window.newrelic&&(newrelic=s);var d=["setPageViewName","setCustomAttribute","setErrorHandler","finished","addToTrace","inlineHit","addRelease"],p="api-",l=p+"ixn-";a(d,function(e,t){s[t]=i(p+t,!0,"api")}),s.addPageAction=i(p+"addPageAction",!0),s.setCurrentRouteName=i(p+"routeName",!0),t.exports=newrelic,s.interaction=function(){return(new r).get()};var m=r.prototype={createTracer:function(e,t){var n={},r=this,i="function"==typeof t;return o(l+"tracer",[u.now(),e,n],r),function(){if(f.emit((i?"":"no-")+"fn-start",[u.now(),r,i],n),i)try{return t.apply(this,arguments)}catch(e){throw f.emit("fn-err",[arguments,this,e],n),e}finally{f.emit("fn-end",[u.now()],n)}}}};a("actionText,setName,setAttribute,save,ignore,onEnd,getContext,end,get".split(","),function(e,t){m[t]=i(l+t)}),newrelic.noticeError=function(e,t){"string"==typeof e&&(e=new Error(e)),o("err",[e,u.now(),!1,t])}},{}],2:[function(e,t,n){function r(){return c.exists&&performance.now?Math.round(performance.now()):(o=Math.max((new Date).getTime(),o))-a}function i(){return o}var o=(new Date).getTime(),a=o,c=e(9);t.exports=r,t.exports.offset=a,t.exports.getLastTimestamp=i},{}],3:[function(e,t,n){function r(e){return!(!e||!e.protocol||"file:"===e.protocol)}t.exports=r},{}],4:[function(e,t,n){function r(e,t){var n=e.getEntries();n.forEach(function(e){"first-paint"===e.name?d("timing",["fp",Math.floor(e.startTime)]):"first-contentful-paint"===e.name&&d("timing",["fcp",Math.floor(e.startTime)])})}function i(e,t){var n=e.getEntries();n.length>0&&d("lcp",[n[n.length-1]])}function o(e){e.getEntries().forEach(function(e){e.hadRecentInput||d("cls",[e])})}function a(e){if(e instanceof m&&!g){var t=Math.round(e.timeStamp),n={type:e.type};t<=p.now()?n.fid=p.now()-t:t>p.offset&&t<=Date.now()?(t-=p.offset,n.fid=p.now()-t):t=p.now(),g=!0,d("timing",["fi",t,n])}}function c(e){d("pageHide",[p.now(),e])}if(!("init"in NREUM&&"page_view_timing"in NREUM.init&&"enabled"in NREUM.init.page_view_timing&&NREUM.init.page_view_timing.enabled===!1)){var f,u,s,d=e("handle"),p=e("loader"),l=e(6),m=NREUM.o.EV;if("PerformanceObserver"in window&&"function"==typeof window.PerformanceObserver){f=new PerformanceObserver(r);try{f.observe({entryTypes:["paint"]})}catch(v){}u=new PerformanceObserver(i);try{u.observe({entryTypes:["largest-contentful-paint"]})}catch(v){}s=new PerformanceObserver(o);try{s.observe({type:"layout-shift",buffered:!0})}catch(v){}}if("addEventListener"in document){var g=!1,w=["click","keydown","mousedown","pointerdown","touchstart"];w.forEach(function(e){document.addEventListener(e,a,!1)})}l(c)}},{}],5:[function(e,t,n){function r(e,t){if(!i)return!1;if(e!==i)return!1;if(!t)return!0;if(!o)return!1;for(var n=o.split("."),r=t.split("."),a=0;a<r.length;a++)if(r[a]!==n[a])return!1;return!0}var i=null,o=null,a=/Version\/(\S+)\s+Safari/;if(navigator.userAgent){var c=navigator.userAgent,f=c.match(a);f&&c.indexOf("Chrome")===-1&&c.indexOf("Chromium")===-1&&(i="Safari",o=f[1])}t.exports={agent:i,version:o,match:r}},{}],6:[function(e,t,n){function r(e){function t(){e(a&&document[a]?document[a]:document[i]?"hidden":"visible")}"addEventListener"in document&&o&&document.addEventListener(o,t,!1)}t.exports=r;var i,o,a;"undefined"!=typeof document.hidden?(i="hidden",o="visibilitychange",a="visibilityState"):"undefined"!=typeof document.msHidden?(i="msHidden",o="msvisibilitychange"):"undefined"!=typeof document.webkitHidden&&(i="webkitHidden",o="webkitvisibilitychange",a="webkitVisibilityState")},{}],7:[function(e,t,n){function r(e,t){var n=[],r="",o=0;for(r in e)i.call(e,r)&&(n[o]=t(r,e[r]),o+=1);return n}var i=Object.prototype.hasOwnProperty;t.exports=r},{}],8:[function(e,t,n){function r(e,t,n){t||(t=0),"undefined"==typeof n&&(n=e?e.length:0);for(var r=-1,i=n-t||0,o=Array(i<0?0:i);++r<i;)o[r]=e[t+r];return o}t.exports=r},{}],9:[function(e,t,n){t.exports={exists:"undefined"!=typeof window.performance&&window.performance.timing&&"undefined"!=typeof window.performance.timing.navigationStart}},{}],ee:[function(e,t,n){function r(){}function i(e){function t(e){return e&&e instanceof r?e:e?u(e,f,a):a()}function n(n,r,i,o,a){if(a!==!1&&(a=!0),!l.aborted||o){e&&a&&e(n,r,i);for(var c=t(i),f=v(n),u=f.length,s=0;s<u;s++)f[s].apply(c,r);var p=d[h[n]];return p&&p.push([b,n,r,c]),c}}function o(e,t){y[e]=v(e).concat(t)}function m(e,t){var n=y[e];if(n)for(var r=0;r<n.length;r++)n[r]===t&&n.splice(r,1)}function v(e){return y[e]||[]}function g(e){return p[e]=p[e]||i(n)}function w(e,t){s(e,function(e,n){t=t||"feature",h[n]=t,t in d||(d[t]=[])})}var y={},h={},b={on:o,addEventListener:o,removeEventListener:m,emit:n,get:g,listeners:v,context:t,buffer:w,abort:c,aborted:!1};return b}function o(e){return u(e,f,a)}function a(){return new r}function c(){(d.api||d.feature)&&(l.aborted=!0,d=l.backlog={})}var f="nr@context",u=e("gos"),s=e(7),d={},p={},l=t.exports=i();t.exports.getOrSetContext=o,l.backlog=d},{}],gos:[function(e,t,n){function r(e,t,n){if(i.call(e,t))return e[t];var r=n();if(Object.defineProperty&&Object.keys)try{return Object.defineProperty(e,t,{value:r,writable:!0,enumerable:!1}),r}catch(o){}return e[t]=r,r}var i=Object.prototype.hasOwnProperty;t.exports=r},{}],handle:[function(e,t,n){function r(e,t,n,r){i.buffer([e],r),i.emit(e,t,n)}var i=e("ee").get("handle");t.exports=r,r.ee=i},{}],id:[function(e,t,n){function r(e){var t=typeof e;return!e||"object"!==t&&"function"!==t?-1:e===window?0:a(e,o,function(){return i++})}var i=1,o="nr@id",a=e("gos");t.exports=r},{}],loader:[function(e,t,n){function r(){if(!E++){var e=x.info=NREUM.info,t=l.getElementsByTagName("script")[0];if(setTimeout(u.abort,3e4),!(e&&e.licenseKey&&e.applicationID&&t))return u.abort();f(h,function(t,n){e[t]||(e[t]=n)});var n=a();c("mark",["onload",n+x.offset],null,"api"),c("timing",["load",n]);var r=l.createElement("script");r.src="https://"+e.agent,t.parentNode.insertBefore(r,t)}}function i(){"complete"===l.readyState&&o()}function o(){c("mark",["domContent",a()+x.offset],null,"api")}var a=e(2),c=e("handle"),f=e(7),u=e("ee"),s=e(5),d=e(3),p=window,l=p.document,m="addEventListener",v="attachEvent",g=p.XMLHttpRequest,w=g&&g.prototype;if(d(p.location)){NREUM.o={ST:setTimeout,SI:p.setImmediate,CT:clearTimeout,XHR:g,REQ:p.Request,EV:p.Event,PR:p.Promise,MO:p.MutationObserver};var y=""+location,h={beacon:"bam.nr-data.net",errorBeacon:"bam.nr-data.net",agent:"js-agent.newrelic.com/nr-1208.min.js"},b=g&&w&&w[m]&&!/CriOS/.test(navigator.userAgent),x=t.exports={offset:a.getLastTimestamp(),now:a,origin:y,features:{},xhrWrappable:b,userAgent:s};e(1),e(4),l[m]?(l[m]("DOMContentLoaded",o,!1),p[m]("load",r,!1)):(l[v]("onreadystatechange",i),p[v]("onload",r)),c("mark",["firstbyte",a.getLastTimestamp()],null,"api");var E=0}},{}],"wrap-function":[function(e,t,n){function r(e,t){function n(t,n,r,f,u){function nrWrapper(){var o,a,s,p;try{a=this,o=d(arguments),s="function"==typeof r?r(o,a):r||{}}catch(l){i([l,"",[o,a,f],s],e)}c(n+"start",[o,a,f],s,u);try{return p=t.apply(a,o)}catch(m){throw c(n+"err",[o,a,m],s,u),m}finally{c(n+"end",[o,a,p],s,u)}}return a(t)?t:(n||(n=""),nrWrapper[p]=t,o(t,nrWrapper,e),nrWrapper)}function r(e,t,r,i,o){r||(r="");var c,f,u,s="-"===r.charAt(0);for(u=0;u<t.length;u++)f=t[u],c=e[f],a(c)||(e[f]=n(c,s?f+r:r,i,f,o))}function c(n,r,o,a){if(!m||t){var c=m;m=!0;try{e.emit(n,r,o,t,a)}catch(f){i([f,n,r,o],e)}m=c}}return e||(e=s),n.inPlace=r,n.flag=p,n}function i(e,t){t||(t=s);try{t.emit("internal-error",e)}catch(n){}}function o(e,t,n){if(Object.defineProperty&&Object.keys)try{var r=Object.keys(e);return r.forEach(function(n){Object.defineProperty(t,n,{get:function(){return e[n]},set:function(t){return e[n]=t,t}})}),t}catch(o){i([o],n)}for(var a in e)l.call(e,a)&&(t[a]=e[a]);return t}function a(e){return!(e&&e instanceof Function&&e.apply&&!e[p])}function c(e,t){var n=t(e);return n[p]=e,o(e,n,s),n}function f(e,t,n){var r=e[t];e[t]=c(r,n)}function u(){for(var e=arguments.length,t=new Array(e),n=0;n<e;++n)t[n]=arguments[n];return t}var s=e("ee"),d=e(8),p="nr@original",l=Object.prototype.hasOwnProperty,m=!1;t.exports=r,t.exports.wrapFunction=c,t.exports.wrapInPlace=f,t.exports.argsToArray=u},{}]},{},["loader"]);</script><script type="text/javascript">window.NREUM||(NREUM={});NREUM.info={"beacon":"bam-cell.nr-data.net","queueTime":0,"licenseKey":"9b2cefefd1","agent":"","transactionName":"MlwDZxBYVxUHWkNcVwsWJ0YMWk0PCVcYRUoKWw1WD0oXFhRYVEFRBlxPRQtcThVcSUVUWxFQAlY9SUsJBFVSWGcXXBJDDVdKAw==","applicationID":"672553648,561796461","errorBeacon":"bam-cell.nr-data.net","applicationTime":729}</script>
        <meta name="description" content=" 
Prepare for your technical interviews by solving questions that are asked in interviews of various companies.
 HackerEarth is a global hub of 5M+ developers. We help companies accurately assess, interview, and hire top developers for a myriad of roles.">
        <link rel="canonical" href="https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/print-array-in-reverse/discussion/">
        <meta name="msvalidate.01" content="1BF418E510B5A17A2D71685C571BF4EB">

        
        <meta name="referrer" content="strict-origin-when-cross-origin">
        

        
        <script>
          (function() {
              if (window.BOOMR && window.BOOMR.version) {
                  return;
              }
              var dom, doc, where, iframe = document.createElement("iframe"),
                  win = window;

              function boomerangSaveLoadTime(e) {
                  win.BOOMR_onload = (e && e.timeStamp) || new Date().getTime();
              }
              if (win.addEventListener) {
                  win.addEventListener("load", boomerangSaveLoadTime, false);
              } else if (win.attachEvent) {
                  win.attachEvent("onload", boomerangSaveLoadTime);
              }

              iframe.src = "javascript:false";
              iframe.title = "";
              iframe.role = "presentation";
              (iframe.frameElement || iframe).style.cssText = "width:0;height:0;border:0;display: none;";
              where = document.getElementsByTagName("script")[0];
              where.parentNode.insertBefore(iframe, where);

              try {
                  doc = iframe.contentWindow.document;
              } catch (e) {
                  dom = document.domain;
                  iframe.src = "javascript:var d=document.open();d.domain='" + dom + "';void(0);";
                  doc = iframe.contentWindow.document;
              }
              doc.open()._l = function() {
                  var js = this.createElement("script");
                  if (dom) this.domain = dom;
                  js.id = "boomr-if-as";
                  js.src = "https://s.go-mpulse.net/boomerang/" +
                      "QKZWA-3BVYP-7W6XK-6HKWZ-EFFZ4";
                  BOOMR_lstart = new Date().getTime();
                  this.body.appendChild(js);
              };
              doc.write('<body onload="document._l();">');
              doc.close();
          })();
        </script>
        


        
<meta name="google-site-verification" content="ozqyeStBcz4eehbY9Ohb_IUQcA4y8BKzzDCT-H1QPPc">


        
        
        <!-- google analytics start -->
        <script>
            (function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
            (i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o),
            m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
            })(window,document,'script','//www.google-analytics.com/analytics.js','ga');

            ga('create', 'UA-34729975-1', 'auto');
            ga('require', 'displayfeatures');
            
            ga('set', '&uid', 5837301);
            
            ga('send', 'pageview');
        </script>
        <!-- google analytics end -->
        
        

        
        
        <!-- Google Tag Manager -->
        <script>
            (function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
            new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
            j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
            'https://www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
            })(window,document,'script','dataLayer','GTM-PBHB3B9');
        </script>
        <!-- End Google Tag Manager -->
        
        

        <title>  Print Array in Reverse | Practice Problems </title>

        
<meta property="og:title" content="Print Array in Reverse | Practice Problems">
<meta property="og:image" content="https://static-fastly.hackerearth.com/static/hackerearth/images/logo/HE_cover.jpg">
<meta property="og:description" content="">
<meta property="og:url" content="https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/print-array-in-reverse/discussion/">
<meta property="og:site_name" content="HackerEarth">
<meta property="og:type" content="hackerearth:problem">

<meta name="twitter:card" content="summary">
<meta name="twitter:site" content="@HackerEarth">
<meta name="twitter:url" content="https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/print-array-in-reverse/discussion/">
<meta name="twitter:title" content="Print Array in Reverse | Practice Problems">

        
        <link rel="shortcut icon" href="https://static-fastly.hackerearth.com/static/hackerearth/images/logo/HE_identity.png" type="image/x-icon">
        

        

        
            <link rel="stylesheet" href="./PrintArrayinRevers_files/base_common_combined.d3472c656cf4.css">
            <link rel="stylesheet" href="./PrintArrayinRevers_files/marketing_footer.20caf7067b08.css">
            <link rel="stylesheet" href="./PrintArrayinRevers_files/tipTip.4cc4f68d44b4.css">
            <link rel="stylesheet" href="./PrintArrayinRevers_files/offline-theme-slide.12bc3d4c96b4.css">
            <link rel="stylesheet" href="./PrintArrayinRevers_files/font-awesome.min.269550530cc1.css">
            <link rel="stylesheet" href="./PrintArrayinRevers_files/opensans.06e0aa7529dc.css">
            <link rel="stylesheet" href="./PrintArrayinRevers_files/proxima-nova.61f8e8377456.css">
            <link rel="stylesheet" href="./PrintArrayinRevers_files/hack.8b30169f8a8b.css">
            <link rel="stylesheet" href="./PrintArrayinRevers_files/unicons.9eda5fc182c1.css">
        

        


        

        <!-- Make the static variable available for all js files -->
        <script>
            var STATIC_URL = "https://static-fastly.hackerearth.com/static/";
            var RECAPTCHA_V3_SITE_KEY = "6LeyqcIZAAAAAOcy_5WJORJsuu9zmbZZxIRp4-em";
        </script>

        <!-- Store CSRF_COOKIE -->
        <script>
            var CSRF_COOKIE_USED = "True";
            var CSRF_COOKIE = "ZYlNMeNxR3sc6Rcv0azBOwUxW7ytPuATN4hKFhyJVlld8YhVXz54zYpOuDWCpoWJ";
        </script>

        
        
        <script src="./PrintArrayinRevers_files/api.js.download"></script>
        

        

    <style type="text/css">.MathJax_Hover_Frame {border-radius: .25em; -webkit-border-radius: .25em; -moz-border-radius: .25em; -khtml-border-radius: .25em; box-shadow: 0px 0px 15px #83A; -webkit-box-shadow: 0px 0px 15px #83A; -moz-box-shadow: 0px 0px 15px #83A; -khtml-box-shadow: 0px 0px 15px #83A; border: 1px solid #A6D ! important; display: inline-block; position: absolute}
.MathJax_Menu_Button .MathJax_Hover_Arrow {position: absolute; cursor: pointer; display: inline-block; border: 2px solid #AAA; border-radius: 4px; -webkit-border-radius: 4px; -moz-border-radius: 4px; -khtml-border-radius: 4px; font-family: 'Courier New',Courier; font-size: 9px; color: #F0F0F0}
.MathJax_Menu_Button .MathJax_Hover_Arrow span {display: block; background-color: #AAA; border: 1px solid; border-radius: 3px; line-height: 0; padding: 4px}
.MathJax_Hover_Arrow:hover {color: white!important; border: 2px solid #CCC!important}
.MathJax_Hover_Arrow:hover span {background-color: #CCC!important}
</style><style type="text/css">#MathJax_About {position: fixed; left: 50%; width: auto; text-align: center; border: 3px outset; padding: 1em 2em; background-color: #DDDDDD; color: black; cursor: default; font-family: message-box; font-size: 120%; font-style: normal; text-indent: 0; text-transform: none; line-height: normal; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; z-index: 201; border-radius: 15px; -webkit-border-radius: 15px; -moz-border-radius: 15px; -khtml-border-radius: 15px; box-shadow: 0px 10px 20px #808080; -webkit-box-shadow: 0px 10px 20px #808080; -moz-box-shadow: 0px 10px 20px #808080; -khtml-box-shadow: 0px 10px 20px #808080; filter: progid:DXImageTransform.Microsoft.dropshadow(OffX=2, OffY=2, Color='gray', Positive='true')}
#MathJax_About.MathJax_MousePost {outline: none}
.MathJax_Menu {position: absolute; background-color: white; color: black; width: auto; padding: 2px; border: 1px solid #CCCCCC; margin: 0; cursor: default; font: menu; text-align: left; text-indent: 0; text-transform: none; line-height: normal; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; z-index: 201; box-shadow: 0px 10px 20px #808080; -webkit-box-shadow: 0px 10px 20px #808080; -moz-box-shadow: 0px 10px 20px #808080; -khtml-box-shadow: 0px 10px 20px #808080; filter: progid:DXImageTransform.Microsoft.dropshadow(OffX=2, OffY=2, Color='gray', Positive='true')}
.MathJax_MenuItem {padding: 2px 2em; background: transparent}
.MathJax_MenuArrow {position: absolute; right: .5em; padding-top: .25em; color: #666666; font-size: .75em}
.MathJax_MenuActive .MathJax_MenuArrow {color: white}
.MathJax_MenuArrow.RTL {left: .5em; right: auto}
.MathJax_MenuCheck {position: absolute; left: .7em}
.MathJax_MenuCheck.RTL {right: .7em; left: auto}
.MathJax_MenuRadioCheck {position: absolute; left: 1em}
.MathJax_MenuRadioCheck.RTL {right: 1em; left: auto}
.MathJax_MenuLabel {padding: 2px 2em 4px 1.33em; font-style: italic}
.MathJax_MenuRule {border-top: 1px solid #CCCCCC; margin: 4px 1px 0px}
.MathJax_MenuDisabled {color: GrayText}
.MathJax_MenuActive {background-color: Highlight; color: HighlightText}
.MathJax_MenuDisabled:focus, .MathJax_MenuLabel:focus {background-color: #E8E8E8}
.MathJax_ContextMenu:focus {outline: none}
.MathJax_ContextMenu .MathJax_MenuItem:focus {outline: none}
#MathJax_AboutClose {top: .2em; right: .2em}
.MathJax_Menu .MathJax_MenuClose {top: -10px; left: -10px}
.MathJax_MenuClose {position: absolute; cursor: pointer; display: inline-block; border: 2px solid #AAA; border-radius: 18px; -webkit-border-radius: 18px; -moz-border-radius: 18px; -khtml-border-radius: 18px; font-family: 'Courier New',Courier; font-size: 24px; color: #F0F0F0}
.MathJax_MenuClose span {display: block; background-color: #AAA; border: 1.5px solid; border-radius: 18px; -webkit-border-radius: 18px; -moz-border-radius: 18px; -khtml-border-radius: 18px; line-height: 0; padding: 8px 0 6px}
.MathJax_MenuClose:hover {color: white!important; border: 2px solid #CCC!important}
.MathJax_MenuClose:hover span {background-color: #CCC!important}
.MathJax_MenuClose:hover:focus {outline: none}
</style><style type="text/css">.MathJax_Preview .MJXf-math {color: inherit!important}
</style><style type="text/css">.MJX_Assistive_MathML {position: absolute!important; top: 0; left: 0; clip: rect(1px, 1px, 1px, 1px); padding: 1px 0 0 0!important; border: 0!important; height: 1px!important; width: 1px!important; overflow: hidden!important; display: block!important; -webkit-touch-callout: none; -webkit-user-select: none; -khtml-user-select: none; -moz-user-select: none; -ms-user-select: none; user-select: none}
.MJX_Assistive_MathML.MJX_Assistive_MathML_Block {width: 100%!important}
</style><style type="text/css">#MathJax_Zoom {position: absolute; background-color: #F0F0F0; overflow: auto; display: block; z-index: 301; padding: .5em; border: 1px solid black; margin: 0; font-weight: normal; font-style: normal; text-align: left; text-indent: 0; text-transform: none; line-height: normal; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; -webkit-box-sizing: content-box; -moz-box-sizing: content-box; box-sizing: content-box; box-shadow: 5px 5px 15px #AAAAAA; -webkit-box-shadow: 5px 5px 15px #AAAAAA; -moz-box-shadow: 5px 5px 15px #AAAAAA; -khtml-box-shadow: 5px 5px 15px #AAAAAA; filter: progid:DXImageTransform.Microsoft.dropshadow(OffX=2, OffY=2, Color='gray', Positive='true')}
#MathJax_ZoomOverlay {position: absolute; left: 0; top: 0; z-index: 300; display: inline-block; width: 100%; height: 100%; border: 0; padding: 0; margin: 0; background-color: white; opacity: 0; filter: alpha(opacity=0)}
#MathJax_ZoomFrame {position: relative; display: inline-block; height: 0; width: 0}
#MathJax_ZoomEventTrap {position: absolute; left: 0; top: 0; z-index: 302; display: inline-block; border: 0; padding: 0; margin: 0; background-color: white; opacity: 0; filter: alpha(opacity=0)}
</style><style type="text/css">.MathJax_Preview {color: #888}
#MathJax_Message {position: fixed; left: 1em; bottom: 1.5em; background-color: #E6E6E6; border: 1px solid #959595; margin: 0px; padding: 2px 8px; z-index: 102; color: black; font-size: 80%; width: auto; white-space: nowrap}
#MathJax_MSIE_Frame {position: absolute; top: 0; left: 0; width: 0px; z-index: 101; border: 0px; margin: 0px; padding: 0px}
.MathJax_Error {color: #CC0000; font-style: italic}
</style><style>.ck.ck-placeholder:before,.ck .ck-placeholder:before{content:attr(data-placeholder);pointer-events:none;cursor:text;color:var(--ck-color-engine-placeholder-text)}.ck-hidden{display:none!important}.ck.ck-reset,.ck.ck-reset_all,.ck.ck-reset_all *{box-sizing:border-box;width:auto;height:auto;position:static}:root{--ck-z-default:1;--ck-z-modal:calc(var(--ck-z-default) + 999);--ck-color-base-foreground:#fafafa;--ck-color-base-background:#fff;--ck-color-base-border:#c4c4c4;--ck-color-base-action:#61b045;--ck-color-base-focus:#6cb5f9;--ck-color-base-text:#333;--ck-color-base-active:#198cf0;--ck-color-base-active-focus:#0e7fe1;--ck-color-base-error:#db3700;--ck-color-focus-border:#47a4f5;--ck-color-focus-shadow:rgba(119,186,248,0.5);--ck-color-focus-disabled-shadow:rgba(119,186,248,0.3);--ck-color-focus-error-shadow:rgba(255,64,31,0.3);--ck-color-text:var(--ck-color-base-text);--ck-color-shadow-drop:rgba(0,0,0,0.15);--ck-color-shadow-drop-active:rgba(0,0,0,0.2);--ck-color-shadow-inner:rgba(0,0,0,0.1);--ck-color-button-default-background:transparent;--ck-color-button-default-hover-background:#e6e6e6;--ck-color-button-default-active-background:#d9d9d9;--ck-color-button-default-active-shadow:#bfbfbf;--ck-color-button-default-disabled-background:transparent;--ck-color-button-on-background:#dedede;--ck-color-button-on-hover-background:#c4c4c4;--ck-color-button-on-active-background:#bababa;--ck-color-button-on-active-shadow:#a1a1a1;--ck-color-button-on-disabled-background:#dedede;--ck-color-button-action-background:var(--ck-color-base-action);--ck-color-button-action-hover-background:#579e3d;--ck-color-button-action-active-background:#53973b;--ck-color-button-action-active-shadow:#498433;--ck-color-button-action-disabled-background:#7ec365;--ck-color-button-action-text:var(--ck-color-base-background);--ck-color-button-save:#008a00;--ck-color-button-cancel:#db3700;--ck-color-switch-button-off-background:#b0b0b0;--ck-color-switch-button-off-hover-background:#a3a3a3;--ck-color-switch-button-on-background:var(--ck-color-button-action-background);--ck-color-switch-button-on-hover-background:#579e3d;--ck-color-switch-button-inner-background:var(--ck-color-base-background);--ck-color-switch-button-inner-shadow:rgba(0,0,0,0.1);--ck-color-dropdown-panel-background:var(--ck-color-base-background);--ck-color-dropdown-panel-border:var(--ck-color-base-border);--ck-color-input-background:var(--ck-color-base-background);--ck-color-input-border:#c7c7c7;--ck-color-input-error-border:var(--ck-color-base-error);--ck-color-input-text:var(--ck-color-base-text);--ck-color-input-disabled-background:#f2f2f2;--ck-color-input-disabled-border:#c7c7c7;--ck-color-input-disabled-text:#5c5c5c;--ck-color-list-background:var(--ck-color-base-background);--ck-color-list-button-hover-background:var(--ck-color-button-default-hover-background);--ck-color-list-button-on-background:var(--ck-color-base-active);--ck-color-list-button-on-background-focus:var(--ck-color-base-active-focus);--ck-color-list-button-on-text:var(--ck-color-base-background);--ck-color-panel-background:var(--ck-color-base-background);--ck-color-panel-border:var(--ck-color-base-border);--ck-color-toolbar-background:var(--ck-color-base-foreground);--ck-color-toolbar-border:var(--ck-color-base-border);--ck-color-tooltip-background:var(--ck-color-base-text);--ck-color-tooltip-text:var(--ck-color-base-background);--ck-color-engine-placeholder-text:#707070;--ck-color-upload-bar-background:#6cb5f9;--ck-color-link-default:#0000f0;--ck-color-link-selected-background:rgba(31,177,255,0.1);--ck-disabled-opacity:.5;--ck-focus-outer-shadow-geometry:0 0 0 3px;--ck-focus-outer-shadow:var(--ck-focus-outer-shadow-geometry) var(--ck-color-focus-shadow);--ck-focus-disabled-outer-shadow:var(--ck-focus-outer-shadow-geometry) var(--ck-color-focus-disabled-shadow);--ck-focus-error-outer-shadow:var(--ck-focus-outer-shadow-geometry) var(--ck-color-focus-error-shadow);--ck-focus-ring:1px solid var(--ck-color-focus-border);--ck-font-size-base:13px;--ck-line-height-base:1.84615;--ck-font-face:Helvetica,Arial,Tahoma,Verdana,Sans-Serif;--ck-font-size-tiny:0.7em;--ck-font-size-small:0.75em;--ck-font-size-normal:1em;--ck-font-size-big:1.4em;--ck-font-size-large:1.8em;--ck-ui-component-min-height:2.3em}.ck.ck-reset,.ck.ck-reset_all,.ck.ck-reset_all *{margin:0;padding:0;border:0;background:transparent;text-decoration:none;vertical-align:middle;transition:none;word-wrap:break-word}.ck.ck-reset_all,.ck.ck-reset_all *{border-collapse:collapse;font:normal normal normal var(--ck-font-size-base)/var(--ck-line-height-base) var(--ck-font-face);color:var(--ck-color-text);text-align:left;white-space:nowrap;cursor:auto;float:none}.ck.ck-reset_all .ck-rtl *{text-align:right}.ck.ck-reset_all iframe{vertical-align:inherit}.ck.ck-reset_all textarea{white-space:pre-wrap}.ck.ck-reset_all input[type=password],.ck.ck-reset_all input[type=text],.ck.ck-reset_all textarea{cursor:text}.ck.ck-reset_all input[type=password][disabled],.ck.ck-reset_all input[type=text][disabled],.ck.ck-reset_all textarea[disabled]{cursor:default}.ck.ck-reset_all fieldset{padding:10px;border:2px groove #dfdee3}.ck.ck-reset_all button::-moz-focus-inner{padding:0;border:0}.ck[dir=rtl],.ck[dir=rtl] .ck{text-align:right}:root{--ck-border-radius:2px;--ck-inner-shadow:2px 2px 3px var(--ck-color-shadow-inner) inset;--ck-drop-shadow:0 1px 2px 1px var(--ck-color-shadow-drop);--ck-drop-shadow-active:0 3px 6px 1px var(--ck-color-shadow-drop-active);--ck-spacing-unit:0.6em;--ck-spacing-large:calc(var(--ck-spacing-unit)*1.5);--ck-spacing-standard:var(--ck-spacing-unit);--ck-spacing-medium:calc(var(--ck-spacing-unit)*0.8);--ck-spacing-small:calc(var(--ck-spacing-unit)*0.5);--ck-spacing-tiny:calc(var(--ck-spacing-unit)*0.3);--ck-spacing-extra-tiny:calc(var(--ck-spacing-unit)*0.16)}.ck.ck-editor__editable:not(.ck-editor__nested-editable){border-radius:0}.ck-rounded-corners .ck.ck-editor__editable:not(.ck-editor__nested-editable),.ck.ck-editor__editable:not(.ck-editor__nested-editable).ck-rounded-corners{border-radius:var(--ck-border-radius)}.ck.ck-editor__editable:not(.ck-editor__nested-editable).ck-focused{outline:none;border:var(--ck-focus-ring);box-shadow:var(--ck-inner-shadow),0 0}.ck.ck-editor__editable_inline{overflow:auto;padding:0 var(--ck-spacing-standard);border:1px solid transparent}.ck.ck-editor__editable_inline[dir=ltr]{text-align:left}.ck.ck-editor__editable_inline[dir=rtl]{text-align:right}.ck.ck-editor__editable_inline>:first-child{margin-top:var(--ck-spacing-large)}.ck.ck-editor__editable_inline>:last-child{margin-bottom:var(--ck-spacing-large)}.ck.ck-balloon-panel.ck-toolbar-container[class*=arrow_n]:after{border-bottom-color:var(--ck-color-base-foreground)}.ck.ck-balloon-panel.ck-toolbar-container[class*=arrow_s]:after{border-top-color:var(--ck-color-base-foreground)}.ck.ck-label{display:block}.ck.ck-voice-label{display:none}.ck.ck-label{font-weight:700}.ck.ck-sticky-panel .ck-sticky-panel__content_sticky{z-index:var(--ck-z-modal);position:fixed;top:0}.ck.ck-sticky-panel .ck-sticky-panel__content_sticky_bottom-limit{top:auto;position:absolute}.ck.ck-sticky-panel .ck-sticky-panel__content_sticky{box-shadow:var(--ck-drop-shadow),0 0;border-width:0 1px 1px;border-top-left-radius:0;border-top-right-radius:0}.ck.ck-toolbar{-moz-user-select:none;-webkit-user-select:none;-ms-user-select:none;user-select:none;display:flex;flex-flow:row wrap;align-items:center}.ck.ck-toolbar.ck-toolbar_vertical{flex-direction:column}.ck.ck-toolbar.ck-toolbar_floating{flex-wrap:nowrap}.ck.ck-toolbar__separator{display:inline-block}.ck.ck-toolbar__newline{display:block;width:100%}.ck.ck-toolbar{border-radius:0}.ck-rounded-corners .ck.ck-toolbar,.ck.ck-toolbar.ck-rounded-corners{border-radius:var(--ck-border-radius)}.ck.ck-toolbar{background:var(--ck-color-toolbar-background);padding:0 var(--ck-spacing-small);border:1px solid var(--ck-color-toolbar-border)}.ck.ck-toolbar>*{margin-top:var(--ck-spacing-small);margin-bottom:var(--ck-spacing-small);margin-right:var(--ck-spacing-small)}[dir=rtl] .ck.ck-toolbar>*{margin-left:var(--ck-spacing-small);margin-right:0}.ck.ck-toolbar.ck-toolbar_vertical{padding:0}.ck.ck-toolbar.ck-toolbar_vertical>.ck{width:100%;margin:0;border-radius:0;border:0}[dir=ltr] .ck.ck-toolbar>:last-child{margin-right:0}[dir=rtl] .ck.ck-toolbar>:last-child{margin-left:0}.ck-toolbar-container .ck.ck-toolbar{border:0}.ck.ck-toolbar__separator{align-self:stretch;width:1px;margin-top:0;margin-bottom:0;background:var(--ck-color-toolbar-border)}.ck.ck-toolbar__newline{margin:0}.ck.ck-editor{position:relative}.ck.ck-editor .ck-editor__top .ck-sticky-panel .ck-toolbar{z-index:var(--ck-z-modal)}.ck.ck-editor__top .ck-sticky-panel .ck-toolbar{border-radius:0}.ck-rounded-corners .ck.ck-editor__top .ck-sticky-panel .ck-toolbar,.ck.ck-editor__top .ck-sticky-panel .ck-toolbar.ck-rounded-corners{border-radius:var(--ck-border-radius);border-bottom-left-radius:0;border-bottom-right-radius:0}.ck.ck-editor__top .ck-sticky-panel .ck-toolbar{border-bottom-width:0}.ck.ck-editor__top .ck-sticky-panel .ck-sticky-panel__content_sticky .ck-toolbar{border-bottom-width:1px;border-radius:0}.ck-rounded-corners .ck.ck-editor__top .ck-sticky-panel .ck-sticky-panel__content_sticky .ck-toolbar,.ck.ck-editor__top .ck-sticky-panel .ck-sticky-panel__content_sticky .ck-toolbar.ck-rounded-corners{border-radius:var(--ck-border-radius);border-radius:0}.ck.ck-editor__main>.ck-editor__editable{background:var(--ck-color-base-background);border-radius:0}.ck-rounded-corners .ck.ck-editor__main>.ck-editor__editable,.ck.ck-editor__main>.ck-editor__editable.ck-rounded-corners{border-radius:var(--ck-border-radius);border-top-left-radius:0;border-top-right-radius:0}.ck.ck-editor__main>.ck-editor__editable:not(.ck-focused){border-color:var(--ck-color-base-border)}.ck.ck-icon{vertical-align:middle}:root{--ck-icon-size:calc(var(--ck-line-height-base)*var(--ck-font-size-normal))}.ck.ck-icon{width:var(--ck-icon-size);height:var(--ck-icon-size);font-size:.8333350694em;will-change:transform}.ck.ck-icon,.ck.ck-icon *{color:inherit;cursor:inherit}.ck.ck-icon :not([fill]){fill:currentColor}.ck.ck-tooltip,.ck.ck-tooltip .ck-tooltip__text:after{position:absolute;pointer-events:none;-webkit-backface-visibility:hidden}.ck-tooltip{visibility:hidden;opacity:0;display:none;z-index:var(--ck-z-modal)}.ck-tooltip .ck-tooltip__text{display:inline-block}.ck-tooltip .ck-tooltip__text:after{content:"";width:0;height:0}:root{--ck-tooltip-arrow-size:5px}.ck.ck-tooltip{left:50%;top:0}.ck.ck-tooltip.ck-tooltip_s{bottom:calc(-1*var(--ck-tooltip-arrow-size));transform:translateY(100%)}.ck.ck-tooltip.ck-tooltip_s .ck-tooltip__text:after{top:calc(-1*var(--ck-tooltip-arrow-size));transform:translateX(-50%);border-left-color:transparent;border-bottom-color:var(--ck-color-tooltip-background);border-right-color:transparent;border-top-color:transparent;border-left-width:var(--ck-tooltip-arrow-size);border-bottom-width:var(--ck-tooltip-arrow-size);border-right-width:var(--ck-tooltip-arrow-size);border-top-width:0}.ck.ck-tooltip.ck-tooltip_n{top:calc(-1*var(--ck-tooltip-arrow-size));transform:translateY(-100%)}.ck.ck-tooltip.ck-tooltip_n .ck-tooltip__text:after{bottom:calc(-1*var(--ck-tooltip-arrow-size));transform:translateX(-50%);border-left-color:transparent;border-bottom-color:transparent;border-right-color:transparent;border-top-color:var(--ck-color-tooltip-background);border-left-width:var(--ck-tooltip-arrow-size);border-bottom-width:0;border-right-width:var(--ck-tooltip-arrow-size);border-top-width:var(--ck-tooltip-arrow-size)}.ck.ck-tooltip .ck-tooltip__text{border-radius:0}.ck-rounded-corners .ck.ck-tooltip .ck-tooltip__text,.ck.ck-tooltip .ck-tooltip__text.ck-rounded-corners{border-radius:var(--ck-border-radius)}.ck.ck-tooltip .ck-tooltip__text{font-size:.9em;line-height:1.5;color:var(--ck-color-tooltip-text);padding:var(--ck-spacing-small) var(--ck-spacing-medium);background:var(--ck-color-tooltip-background);position:relative;left:-50%}.ck.ck-tooltip .ck-tooltip__text:after{border-style:solid;left:50%}.ck.ck-tooltip,.ck.ck-tooltip .ck-tooltip__text:after{transition:opacity .2s ease-in-out .2s}.ck.ck-button,a.ck.ck-button{-moz-user-select:none;-webkit-user-select:none;-ms-user-select:none;user-select:none}.ck.ck-button .ck-tooltip,a.ck.ck-button .ck-tooltip{display:block}@media (hover:none){.ck.ck-button .ck-tooltip,a.ck.ck-button .ck-tooltip{display:none}}.ck.ck-button,a.ck.ck-button{position:relative;display:inline-flex;align-items:center;justify-content:left}.ck.ck-button.ck-button_with-text .ck-button__label,a.ck.ck-button.ck-button_with-text .ck-button__label{display:inline-block}.ck.ck-button:not(.ck-button_with-text),a.ck.ck-button:not(.ck-button_with-text){justify-content:center}.ck.ck-button:hover .ck-tooltip,a.ck.ck-button:hover .ck-tooltip{visibility:visible;opacity:1}.ck.ck-button .ck-button__label,.ck.ck-button:focus:not(:hover) .ck-tooltip,a.ck.ck-button .ck-button__label,a.ck.ck-button:focus:not(:hover) .ck-tooltip{display:none}.ck.ck-button,a.ck.ck-button{background:var(--ck-color-button-default-background)}.ck.ck-button:not(.ck-disabled):hover,a.ck.ck-button:not(.ck-disabled):hover{background:var(--ck-color-button-default-hover-background)}.ck.ck-button:not(.ck-disabled):active,a.ck.ck-button:not(.ck-disabled):active{background:var(--ck-color-button-default-active-background);box-shadow:inset 0 2px 2px var(--ck-color-button-default-active-shadow)}.ck.ck-button.ck-disabled,a.ck.ck-button.ck-disabled{background:var(--ck-color-button-default-disabled-background)}.ck.ck-button,a.ck.ck-button{border-radius:0}.ck-rounded-corners .ck.ck-button,.ck-rounded-corners a.ck.ck-button,.ck.ck-button.ck-rounded-corners,a.ck.ck-button.ck-rounded-corners{border-radius:var(--ck-border-radius)}.ck.ck-button,a.ck.ck-button{white-space:nowrap;cursor:default;vertical-align:middle;padding:var(--ck-spacing-tiny);text-align:center;min-width:var(--ck-ui-component-min-height);min-height:var(--ck-ui-component-min-height);line-height:1;font-size:inherit;border:1px solid transparent;transition:box-shadow .2s ease-in-out;-webkit-appearance:none}.ck.ck-button:active,.ck.ck-button:focus,a.ck.ck-button:active,a.ck.ck-button:focus{outline:none;border:var(--ck-focus-ring);box-shadow:var(--ck-focus-outer-shadow),0 0;border-color:transparent}.ck.ck-button.ck-disabled:active,.ck.ck-button.ck-disabled:focus,a.ck.ck-button.ck-disabled:active,a.ck.ck-button.ck-disabled:focus{box-shadow:var(--ck-focus-disabled-outer-shadow),0 0}.ck.ck-button.ck-disabled .ck-button__icon,a.ck.ck-button.ck-disabled .ck-button__icon{opacity:var(--ck-disabled-opacity)}.ck.ck-button.ck-disabled .ck-button__label,a.ck.ck-button.ck-disabled .ck-button__label{opacity:var(--ck-disabled-opacity)}.ck.ck-button.ck-button_with-text,a.ck.ck-button.ck-button_with-text{padding:var(--ck-spacing-tiny) var(--ck-spacing-standard)}[dir=ltr] .ck.ck-button.ck-button_with-text .ck-button__icon,[dir=ltr] a.ck.ck-button.ck-button_with-text .ck-button__icon{margin-left:calc(-1*var(--ck-spacing-small));margin-right:var(--ck-spacing-small)}[dir=rtl] .ck.ck-button.ck-button_with-text .ck-button__icon,[dir=rtl] a.ck.ck-button.ck-button_with-text .ck-button__icon{margin-right:calc(-1*var(--ck-spacing-small));margin-left:var(--ck-spacing-small)}.ck.ck-button.ck-on,a.ck.ck-button.ck-on{background:var(--ck-color-button-on-background)}.ck.ck-button.ck-on:not(.ck-disabled):hover,a.ck.ck-button.ck-on:not(.ck-disabled):hover{background:var(--ck-color-button-on-hover-background)}.ck.ck-button.ck-on:not(.ck-disabled):active,a.ck.ck-button.ck-on:not(.ck-disabled):active{background:var(--ck-color-button-on-active-background);box-shadow:inset 0 2px 2px var(--ck-color-button-on-active-shadow)}.ck.ck-button.ck-on.ck-disabled,a.ck.ck-button.ck-on.ck-disabled{background:var(--ck-color-button-on-disabled-background)}.ck.ck-button.ck-button-save,a.ck.ck-button.ck-button-save{color:var(--ck-color-button-save)}.ck.ck-button.ck-button-cancel,a.ck.ck-button.ck-button-cancel{color:var(--ck-color-button-cancel)}.ck.ck-button .ck-button__icon use,.ck.ck-button .ck-button__icon use *,a.ck.ck-button .ck-button__icon use,a.ck.ck-button .ck-button__icon use *{color:inherit}.ck.ck-button .ck-button__label,a.ck.ck-button .ck-button__label{font-size:inherit;font-weight:inherit;color:inherit;cursor:inherit;vertical-align:middle}[dir=ltr] .ck.ck-button .ck-button__label,[dir=ltr] a.ck.ck-button .ck-button__label{text-align:left}[dir=rtl] .ck.ck-button .ck-button__label,[dir=rtl] a.ck.ck-button .ck-button__label{text-align:right}.ck.ck-button-action,a.ck.ck-button-action{background:var(--ck-color-button-action-background)}.ck.ck-button-action:not(.ck-disabled):hover,a.ck.ck-button-action:not(.ck-disabled):hover{background:var(--ck-color-button-action-hover-background)}.ck.ck-button-action:not(.ck-disabled):active,a.ck.ck-button-action:not(.ck-disabled):active{background:var(--ck-color-button-action-active-background);box-shadow:inset 0 2px 2px var(--ck-color-button-action-active-shadow)}.ck.ck-button-action.ck-disabled,a.ck.ck-button-action.ck-disabled{background:var(--ck-color-button-action-disabled-background)}.ck.ck-button-action,a.ck.ck-button-action{color:var(--ck-color-button-action-text)}.ck.ck-button-bold,a.ck.ck-button-bold{font-weight:700}.ck-content blockquote{overflow:hidden;padding-right:1.5em;padding-left:1.5em;margin-left:0;margin-right:0;font-style:italic;border-left:5px solid #ccc}.ck-content[dir=rtl] blockquote{border-left:0;border-right:5px solid #ccc}:root{--ck-color-resizer:var(--ck-color-focus-border);--ck-resizer-size:10px;--ck-resizer-border-width:1px;--ck-resizer-border-radius:2px;--ck-resizer-offset:calc(var(--ck-resizer-size)/-2 - 2px);--ck-resizer-tooltip-offset:10px;--ck-color-resizer-tooltip-background:#262626;--ck-color-resizer-tooltip-text:#f2f2f2}.ck .ck-widget_with-resizer{position:relative}.ck .ck-widget__resizer{display:none;position:absolute;pointer-events:none;left:0;top:0;outline:1px solid var(--ck-color-resizer)}.ck-focused .ck-widget_with-resizer.ck-widget_selected>.ck-widget__resizer{display:block}.ck .ck-widget__resizer__handle{position:absolute;pointer-events:all;width:var(--ck-resizer-size);height:var(--ck-resizer-size);background:var(--ck-color-focus-border);border:var(--ck-resizer-border-width) solid #fff;border-radius:var(--ck-resizer-border-radius)}.ck .ck-widget__resizer__handle.ck-widget__resizer__handle-top-left{top:var(--ck-resizer-offset);left:var(--ck-resizer-offset);cursor:nwse-resize}.ck .ck-widget__resizer__handle.ck-widget__resizer__handle-top-right{top:var(--ck-resizer-offset);right:var(--ck-resizer-offset);cursor:nesw-resize}.ck .ck-widget__resizer__handle.ck-widget__resizer__handle-bottom-right{bottom:var(--ck-resizer-offset);right:var(--ck-resizer-offset);cursor:nwse-resize}.ck .ck-widget__resizer__handle.ck-widget__resizer__handle-bottom-left{bottom:var(--ck-resizer-offset);left:var(--ck-resizer-offset);cursor:nesw-resize}.ck .ck-widget.ck-widget_with-selection-handler{position:relative}.ck .ck-widget.ck-widget_with-selection-handler:hover .ck-widget__selection-handler{visibility:visible}.ck .ck-widget.ck-widget_with-selection-handler .ck-widget__selection-handler{position:absolute}.ck .ck-widget.ck-widget_with-selection-handler .ck-widget__selection-handler .ck-icon{display:block}.ck .ck-widget.ck-widget_with-selection-handler.ck-widget_selected .ck-widget__selection-handler{visibility:visible}.ck .ck-size-view{background:var(--ck-color-resizer-tooltip-background);color:var(--ck-color-resizer-tooltip-text);border:1px solid var(--ck-color-resizer-tooltip-text);border-radius:var(--ck-resizer-border-radius);font-size:var(--ck-font-size-tiny);display:block;padding:var(--ck-spacing-small)}.ck .ck-size-view.ck-orientation-bottom-left,.ck .ck-size-view.ck-orientation-bottom-right,.ck .ck-size-view.ck-orientation-top-left,.ck .ck-size-view.ck-orientation-top-right{position:absolute}.ck .ck-size-view.ck-orientation-top-left{top:var(--ck-resizer-tooltip-offset);left:var(--ck-resizer-tooltip-offset)}.ck .ck-size-view.ck-orientation-top-right{top:var(--ck-resizer-tooltip-offset);right:var(--ck-resizer-tooltip-offset)}.ck .ck-size-view.ck-orientation-bottom-right{bottom:var(--ck-resizer-tooltip-offset);right:var(--ck-resizer-tooltip-offset)}.ck .ck-size-view.ck-orientation-bottom-left{bottom:var(--ck-resizer-tooltip-offset);left:var(--ck-resizer-tooltip-offset)}:root{--ck-widget-outline-thickness:3px;--ck-widget-handler-icon-size:16px;--ck-widget-handler-animation-duration:200ms;--ck-widget-handler-animation-curve:ease;--ck-color-widget-blurred-border:#dedede;--ck-color-widget-hover-border:#ffc83d;--ck-color-widget-editable-focus-background:var(--ck-color-base-background);--ck-color-widget-drag-handler-icon-color:var(--ck-color-base-background)}.ck .ck-widget{outline-width:var(--ck-widget-outline-thickness);outline-style:solid;outline-color:transparent;transition:outline-color var(--ck-widget-handler-animation-duration) var(--ck-widget-handler-animation-curve)}.ck .ck-widget.ck-widget_selected,.ck .ck-widget.ck-widget_selected:hover{outline:var(--ck-widget-outline-thickness) solid var(--ck-color-focus-border)}.ck .ck-widget:hover{outline-color:var(--ck-color-widget-hover-border)}.ck .ck-editor__nested-editable{border:1px solid transparent}.ck .ck-editor__nested-editable.ck-editor__nested-editable_focused,.ck .ck-editor__nested-editable:focus{outline:none;border:var(--ck-focus-ring);box-shadow:var(--ck-inner-shadow),0 0;background-color:var(--ck-color-widget-editable-focus-background)}.ck-editor__editable>.ck-widget.ck-widget_with-selection-handler:first-child,.ck-editor__editable blockquote>.ck-widget.ck-widget_with-selection-handler:first-child{margin-top:calc(1em + var(--ck-widget-handler-icon-size))}.ck .ck-widget.ck-widget_with-selection-handler .ck-widget__selection-handler{padding:4px;box-sizing:border-box;background-color:transparent;opacity:0;transition:background-color var(--ck-widget-handler-animation-duration) var(--ck-widget-handler-animation-curve),visibility var(--ck-widget-handler-animation-duration) var(--ck-widget-handler-animation-curve),opacity var(--ck-widget-handler-animation-duration) var(--ck-widget-handler-animation-curve);border-radius:var(--ck-border-radius) var(--ck-border-radius) 0 0;transform:translateY(-100%);left:calc(0px - var(--ck-widget-outline-thickness))}.ck .ck-widget.ck-widget_with-selection-handler .ck-widget__selection-handler:hover .ck-icon .ck-icon__selected-indicator{opacity:1}.ck .ck-widget.ck-widget_with-selection-handler .ck-widget__selection-handler .ck-icon{width:var(--ck-widget-handler-icon-size);height:var(--ck-widget-handler-icon-size);color:var(--ck-color-widget-drag-handler-icon-color)}.ck .ck-widget.ck-widget_with-selection-handler .ck-widget__selection-handler .ck-icon .ck-icon__selected-indicator{opacity:0;transition:opacity .3s var(--ck-widget-handler-animation-curve)}.ck .ck-widget.ck-widget_with-selection-handler.ck-widget_selected .ck-widget__selection-handler,.ck .ck-widget.ck-widget_with-selection-handler.ck-widget_selected:hover .ck-widget__selection-handler{opacity:1;background-color:var(--ck-color-focus-border)}.ck .ck-widget.ck-widget_with-selection-handler.ck-widget_selected .ck-widget__selection-handler .ck-icon .ck-icon__selected-indicator,.ck .ck-widget.ck-widget_with-selection-handler.ck-widget_selected:hover .ck-widget__selection-handler .ck-icon .ck-icon__selected-indicator{opacity:1}.ck .ck-widget.ck-widget_with-selection-handler:hover .ck-widget__selection-handler{opacity:1;background-color:var(--ck-color-widget-hover-border)}.ck[dir=rtl] .ck-widget.ck-widget_with-selection-handler .ck-widget__selection-handler{left:auto;right:calc(0px - var(--ck-widget-outline-thickness))}.ck-editor__editable.ck-blurred .ck-widget.ck-widget_selected,.ck-editor__editable.ck-blurred .ck-widget.ck-widget_selected:hover{outline-color:var(--ck-color-widget-blurred-border)}.ck-editor__editable.ck-blurred .ck-widget.ck-widget_selected .ck-widget__selection-handler,.ck-editor__editable.ck-blurred .ck-widget.ck-widget_selected .ck-widget__selection-handler:hover,.ck-editor__editable.ck-blurred .ck-widget.ck-widget_selected:hover .ck-widget__selection-handler,.ck-editor__editable.ck-blurred .ck-widget.ck-widget_selected:hover .ck-widget__selection-handler:hover{background:var(--ck-color-widget-blurred-border)}.ck-editor__editable.ck-read-only .ck-widget{--ck-widget-outline-thickness:0}.ck.ck-labeled-input .ck-labeled-input__status{font-size:var(--ck-font-size-small);margin-top:var(--ck-spacing-small);white-space:normal}.ck.ck-labeled-input .ck-labeled-input__status_error{color:var(--ck-color-base-error)}:root{--ck-input-text-width:18em}.ck.ck-input-text{border-radius:0}.ck-rounded-corners .ck.ck-input-text,.ck.ck-input-text.ck-rounded-corners{border-radius:var(--ck-border-radius)}.ck.ck-input-text{box-shadow:var(--ck-inner-shadow),0 0;background:var(--ck-color-input-background);border:1px solid var(--ck-color-input-border);padding:var(--ck-spacing-extra-tiny) var(--ck-spacing-medium);min-width:var(--ck-input-text-width);min-height:var(--ck-ui-component-min-height);transition-property:box-shadow,border;transition:.2s ease-in-out}.ck.ck-input-text:focus{outline:none;border:var(--ck-focus-ring);box-shadow:var(--ck-focus-outer-shadow),var(--ck-inner-shadow)}.ck.ck-input-text[readonly]{border:1px solid var(--ck-color-input-disabled-border);background:var(--ck-color-input-disabled-background);color:var(--ck-color-input-disabled-text)}.ck.ck-input-text[readonly]:focus{box-shadow:var(--ck-focus-disabled-outer-shadow),var(--ck-inner-shadow)}.ck.ck-input-text.ck-error{border-color:var(--ck-color-input-error-border);animation:ck-text-input-shake .3s ease both}.ck.ck-input-text.ck-error:focus{box-shadow:var(--ck-focus-error-outer-shadow),var(--ck-inner-shadow)}@keyframes ck-text-input-shake{20%{transform:translateX(-2px)}40%{transform:translateX(2px)}60%{transform:translateX(-1px)}80%{transform:translateX(1px)}}.ck.ck-text-alternative-form{display:flex;flex-direction:row;flex-wrap:nowrap}.ck.ck-text-alternative-form .ck-labeled-input{display:inline-block}.ck.ck-text-alternative-form .ck-label{display:none}@media screen and (max-width:600px){.ck.ck-text-alternative-form{flex-wrap:wrap}.ck.ck-text-alternative-form .ck-labeled-input{flex-basis:100%}.ck.ck-text-alternative-form .ck-button{flex-basis:50%}}.ck.ck-text-alternative-form{padding:var(--ck-spacing-standard)}.ck.ck-text-alternative-form:focus{outline:none}[dir=ltr] .ck.ck-text-alternative-form>:not(:first-child),[dir=rtl] .ck.ck-text-alternative-form>:not(:last-child){margin-left:var(--ck-spacing-standard)}@media screen and (max-width:600px){.ck.ck-text-alternative-form{padding:0;width:calc(0.8*var(--ck-input-text-width))}.ck.ck-text-alternative-form .ck-labeled-input{margin:var(--ck-spacing-standard) var(--ck-spacing-standard) 0}.ck.ck-text-alternative-form .ck-labeled-input .ck-input-text{min-width:0;width:100%}.ck.ck-text-alternative-form .ck-button{padding:var(--ck-spacing-standard);margin-top:var(--ck-spacing-standard);border-radius:0;border:0;border-top:1px solid var(--ck-color-base-border)}[dir=ltr] .ck.ck-text-alternative-form .ck-button{margin-left:0}[dir=ltr] .ck.ck-text-alternative-form .ck-button:first-of-type{border-right:1px solid var(--ck-color-base-border)}[dir=rtl] .ck.ck-text-alternative-form .ck-button{margin-left:0}[dir=rtl] .ck.ck-text-alternative-form .ck-button:last-of-type{border-right:1px solid var(--ck-color-base-border)}}:root{--ck-balloon-panel-arrow-z-index:calc(var(--ck-z-default) - 3)}.ck.ck-balloon-panel{display:none;position:absolute;z-index:var(--ck-z-modal)}.ck.ck-balloon-panel.ck-balloon-panel_with-arrow:after,.ck.ck-balloon-panel.ck-balloon-panel_with-arrow:before{content:"";position:absolute}.ck.ck-balloon-panel.ck-balloon-panel_with-arrow:before{z-index:var(--ck-balloon-panel-arrow-z-index)}.ck.ck-balloon-panel.ck-balloon-panel_with-arrow:after{z-index:calc(var(--ck-balloon-panel-arrow-z-index) + 1)}.ck.ck-balloon-panel[class*=arrow_n]:before{z-index:var(--ck-balloon-panel-arrow-z-index)}.ck.ck-balloon-panel[class*=arrow_n]:after{z-index:calc(var(--ck-balloon-panel-arrow-z-index) + 1)}.ck.ck-balloon-panel[class*=arrow_s]:before{z-index:var(--ck-balloon-panel-arrow-z-index)}.ck.ck-balloon-panel[class*=arrow_s]:after{z-index:calc(var(--ck-balloon-panel-arrow-z-index) + 1)}.ck.ck-balloon-panel.ck-balloon-panel_visible{display:block}:root{--ck-balloon-arrow-offset:2px;--ck-balloon-arrow-height:10px;--ck-balloon-arrow-half-width:8px}.ck.ck-balloon-panel{border-radius:0}.ck-rounded-corners .ck.ck-balloon-panel,.ck.ck-balloon-panel.ck-rounded-corners{border-radius:var(--ck-border-radius)}.ck.ck-balloon-panel{box-shadow:var(--ck-drop-shadow),0 0;min-height:15px;background:var(--ck-color-panel-background);border:1px solid var(--ck-color-panel-border)}.ck.ck-balloon-panel.ck-balloon-panel_with-arrow:after,.ck.ck-balloon-panel.ck-balloon-panel_with-arrow:before{width:0;height:0;border-style:solid}.ck.ck-balloon-panel[class*=arrow_n]:after,.ck.ck-balloon-panel[class*=arrow_n]:before{border-left-width:var(--ck-balloon-arrow-half-width);border-bottom-width:var(--ck-balloon-arrow-height);border-right-width:var(--ck-balloon-arrow-half-width);border-top-width:0}.ck.ck-balloon-panel[class*=arrow_n]:before{border-bottom-color:var(--ck-color-panel-border)}.ck.ck-balloon-panel[class*=arrow_n]:after,.ck.ck-balloon-panel[class*=arrow_n]:before{border-left-color:transparent;border-right-color:transparent;border-top-color:transparent}.ck.ck-balloon-panel[class*=arrow_n]:after{border-bottom-color:var(--ck-color-panel-background);margin-top:var(--ck-balloon-arrow-offset)}.ck.ck-balloon-panel[class*=arrow_s]:after,.ck.ck-balloon-panel[class*=arrow_s]:before{border-left-width:var(--ck-balloon-arrow-half-width);border-bottom-width:0;border-right-width:var(--ck-balloon-arrow-half-width);border-top-width:var(--ck-balloon-arrow-height)}.ck.ck-balloon-panel[class*=arrow_s]:before{border-top-color:var(--ck-color-panel-border)}.ck.ck-balloon-panel[class*=arrow_s]:after,.ck.ck-balloon-panel[class*=arrow_s]:before{border-left-color:transparent;border-bottom-color:transparent;border-right-color:transparent}.ck.ck-balloon-panel[class*=arrow_s]:after{border-top-color:var(--ck-color-panel-background);margin-bottom:var(--ck-balloon-arrow-offset)}.ck.ck-balloon-panel.ck-balloon-panel_arrow_n:after,.ck.ck-balloon-panel.ck-balloon-panel_arrow_n:before{left:50%;margin-left:calc(-1*var(--ck-balloon-arrow-half-width));top:calc(-1*var(--ck-balloon-arrow-height))}.ck.ck-balloon-panel.ck-balloon-panel_arrow_nw:after,.ck.ck-balloon-panel.ck-balloon-panel_arrow_nw:before{left:calc(2*var(--ck-balloon-arrow-half-width));top:calc(-1*var(--ck-balloon-arrow-height))}.ck.ck-balloon-panel.ck-balloon-panel_arrow_ne:after,.ck.ck-balloon-panel.ck-balloon-panel_arrow_ne:before{right:calc(2*var(--ck-balloon-arrow-half-width));top:calc(-1*var(--ck-balloon-arrow-height))}.ck.ck-balloon-panel.ck-balloon-panel_arrow_s:after,.ck.ck-balloon-panel.ck-balloon-panel_arrow_s:before{left:50%;margin-left:calc(-1*var(--ck-balloon-arrow-half-width));bottom:calc(-1*var(--ck-balloon-arrow-height))}.ck.ck-balloon-panel.ck-balloon-panel_arrow_sw:after,.ck.ck-balloon-panel.ck-balloon-panel_arrow_sw:before{left:calc(2*var(--ck-balloon-arrow-half-width));bottom:calc(-1*var(--ck-balloon-arrow-height))}.ck.ck-balloon-panel.ck-balloon-panel_arrow_se:after,.ck.ck-balloon-panel.ck-balloon-panel_arrow_se:before{right:calc(2*var(--ck-balloon-arrow-half-width));bottom:calc(-1*var(--ck-balloon-arrow-height))}.ck .ck-balloon-rotator__navigation{display:flex;align-items:center;justify-content:center}.ck .ck-balloon-rotator__content .ck-toolbar{justify-content:center}.ck .ck-balloon-rotator__navigation{background:var(--ck-color-toolbar-background);border-bottom:1px solid var(--ck-color-toolbar-border);padding:0 var(--ck-spacing-small)}.ck .ck-balloon-rotator__navigation>*{margin-right:var(--ck-spacing-small);margin-top:var(--ck-spacing-small);margin-bottom:var(--ck-spacing-small)}.ck .ck-balloon-rotator__navigation .ck-balloon-rotator__counter{margin-right:var(--ck-spacing-standard);margin-left:var(--ck-spacing-small)}.ck .ck-balloon-rotator__content .ck.ck-annotation-wrapper{box-shadow:none}.ck .ck-fake-panel{position:absolute;z-index:calc(var(--ck-z-modal) - 1)}.ck .ck-fake-panel div{position:absolute}.ck .ck-fake-panel div:first-child{z-index:2}.ck .ck-fake-panel div:nth-child(2){z-index:1}:root{--ck-balloon-fake-panel-offset-horizontal:6px;--ck-balloon-fake-panel-offset-vertical:6px}.ck .ck-fake-panel div{box-shadow:var(--ck-drop-shadow),0 0;min-height:15px;background:var(--ck-color-panel-background);border:1px solid var(--ck-color-panel-border);border-radius:var(--ck-border-radius);width:100%;height:100%}.ck .ck-fake-panel div:first-child{margin-left:var(--ck-balloon-fake-panel-offset-horizontal);margin-top:var(--ck-balloon-fake-panel-offset-vertical)}.ck .ck-fake-panel div:nth-child(2){margin-left:calc(var(--ck-balloon-fake-panel-offset-horizontal)*2);margin-top:calc(var(--ck-balloon-fake-panel-offset-vertical)*2)}.ck .ck-fake-panel div:nth-child(3){margin-left:calc(var(--ck-balloon-fake-panel-offset-horizontal)*3);margin-top:calc(var(--ck-balloon-fake-panel-offset-vertical)*3)}.ck .ck-balloon-panel_arrow_s+.ck-fake-panel,.ck .ck-balloon-panel_arrow_se+.ck-fake-panel,.ck .ck-balloon-panel_arrow_sw+.ck-fake-panel{--ck-balloon-fake-panel-offset-vertical:-6px}.ck-content .image{display:table;clear:both;text-align:center;margin:1em auto}.ck-content .image>img{display:block;margin:0 auto;max-width:100%;min-width:50px}.ck.ck-editor__editable .image{position:relative}.ck.ck-editor__editable .image .ck-progress-bar{position:absolute;top:0;left:0}.ck.ck-editor__editable .image.ck-appear{animation:fadeIn .7s}.ck.ck-editor__editable .image .ck-progress-bar{height:2px;width:0;background:var(--ck-color-upload-bar-background);transition:width .1s}@keyframes fadeIn{0%{opacity:0}to{opacity:1}}.ck-image-upload-complete-icon{display:block;position:absolute;top:10px;right:10px;border-radius:50%}.ck-image-upload-complete-icon:after{content:"";position:absolute}:root{--ck-color-image-upload-icon:#fff;--ck-color-image-upload-icon-background:#008a00;--ck-image-upload-icon-size:20px;--ck-image-upload-icon-width:2px}.ck-image-upload-complete-icon{width:var(--ck-image-upload-icon-size);height:var(--ck-image-upload-icon-size);opacity:0;background:var(--ck-color-image-upload-icon-background);animation-name:ck-upload-complete-icon-show,ck-upload-complete-icon-hide;animation-fill-mode:forwards,forwards;animation-duration:.5s,.5s;font-size:var(--ck-image-upload-icon-size);animation-delay:0ms,3s}.ck-image-upload-complete-icon:after{left:25%;top:50%;opacity:0;height:0;width:0;transform:scaleX(-1) rotate(135deg);transform-origin:left top;border-top:var(--ck-image-upload-icon-width) solid var(--ck-color-image-upload-icon);border-right:var(--ck-image-upload-icon-width) solid var(--ck-color-image-upload-icon);animation-name:ck-upload-complete-icon-check;animation-duration:.5s;animation-delay:.5s;animation-fill-mode:forwards;box-sizing:border-box}@keyframes ck-upload-complete-icon-show{0%{opacity:0}to{opacity:1}}@keyframes ck-upload-complete-icon-hide{0%{opacity:1}to{opacity:0}}@keyframes ck-upload-complete-icon-check{0%{opacity:1;width:0;height:0}33%{width:.3em;height:0}to{opacity:1;width:.3em;height:.45em}}.ck .ck-upload-placeholder-loader{position:absolute;display:flex;align-items:center;justify-content:center;top:0;left:0}.ck .ck-upload-placeholder-loader:before{content:"";position:relative}:root{--ck-color-upload-placeholder-loader:#b3b3b3;--ck-upload-placeholder-loader-size:32px}.ck .ck-image-upload-placeholder{width:100%;margin:0}.ck .ck-upload-placeholder-loader{width:100%;height:100%}.ck .ck-upload-placeholder-loader:before{width:var(--ck-upload-placeholder-loader-size);height:var(--ck-upload-placeholder-loader-size);border-radius:50%;border-top:3px solid var(--ck-color-upload-placeholder-loader);border-right:2px solid transparent;animation:ck-upload-placeholder-loader 1s linear infinite}@keyframes ck-upload-placeholder-loader{to{transform:rotate(1turn)}}.ck.ck-dropdown{display:inline-block;position:relative}.ck.ck-dropdown .ck-dropdown__arrow{pointer-events:none;z-index:var(--ck-z-default)}.ck.ck-dropdown .ck-button.ck-dropdown__button{width:100%}.ck.ck-dropdown .ck-button.ck-dropdown__button.ck-on .ck-tooltip{display:none}.ck.ck-dropdown .ck-dropdown__panel{-webkit-backface-visibility:hidden;display:none;z-index:var(--ck-z-modal);position:absolute}.ck.ck-dropdown .ck-dropdown__panel.ck-dropdown__panel-visible{display:inline-block;will-change:transform}.ck.ck-dropdown .ck-dropdown__panel.ck-dropdown__panel_ne,.ck.ck-dropdown .ck-dropdown__panel.ck-dropdown__panel_nw{bottom:100%}.ck.ck-dropdown .ck-dropdown__panel.ck-dropdown__panel_se,.ck.ck-dropdown .ck-dropdown__panel.ck-dropdown__panel_sw{transform:translate3d(0,100%,0)}.ck.ck-dropdown .ck-dropdown__panel.ck-dropdown__panel_ne,.ck.ck-dropdown .ck-dropdown__panel.ck-dropdown__panel_se{left:0}.ck.ck-dropdown .ck-dropdown__panel.ck-dropdown__panel_nw,.ck.ck-dropdown .ck-dropdown__panel.ck-dropdown__panel_sw{right:0}:root{--ck-dropdown-arrow-size:calc(0.5*var(--ck-icon-size))}.ck.ck-dropdown{font-size:inherit}.ck.ck-dropdown .ck-dropdown__arrow{width:var(--ck-dropdown-arrow-size)}[dir=ltr] .ck.ck-dropdown .ck-dropdown__arrow{right:var(--ck-spacing-standard);margin-left:var(--ck-spacing-small)}[dir=rtl] .ck.ck-dropdown .ck-dropdown__arrow{left:var(--ck-spacing-standard);margin-right:var(--ck-spacing-small)}.ck.ck-dropdown.ck-disabled .ck-dropdown__arrow{opacity:var(--ck-disabled-opacity)}[dir=ltr] .ck.ck-dropdown .ck-button.ck-dropdown__button:not(.ck-button_with-text){padding-left:var(--ck-spacing-small)}[dir=rtl] .ck.ck-dropdown .ck-button.ck-dropdown__button:not(.ck-button_with-text){padding-right:var(--ck-spacing-small)}.ck.ck-dropdown .ck-button.ck-dropdown__button.ck-disabled .ck-button__label{opacity:var(--ck-disabled-opacity)}.ck.ck-dropdown .ck-button.ck-dropdown__button.ck-on{border-bottom-left-radius:0;border-bottom-right-radius:0}.ck.ck-dropdown .ck-button.ck-dropdown__button .ck-button__label{width:7em;overflow:hidden;text-overflow:ellipsis}.ck.ck-dropdown__panel{box-shadow:var(--ck-drop-shadow),0 0;border-radius:0}.ck-rounded-corners .ck.ck-dropdown__panel,.ck.ck-dropdown__panel.ck-rounded-corners{border-radius:var(--ck-border-radius);border-top-left-radius:0}.ck.ck-dropdown__panel{background:var(--ck-color-dropdown-panel-background);border:1px solid var(--ck-color-dropdown-panel-border);bottom:0;min-width:100%}.ck.ck-list{-moz-user-select:none;-webkit-user-select:none;-ms-user-select:none;user-select:none;display:flex;flex-direction:column}.ck.ck-list .ck-list__item,.ck.ck-list .ck-list__separator{display:block}.ck.ck-list .ck-list__item>:focus{position:relative;z-index:var(--ck-z-default)}.ck.ck-list{border-radius:0}.ck-rounded-corners .ck.ck-list,.ck.ck-list.ck-rounded-corners{border-radius:var(--ck-border-radius)}.ck.ck-list{list-style-type:none;background:var(--ck-color-list-background)}.ck.ck-list__item{cursor:default;min-width:12em}.ck.ck-list__item .ck-button{min-height:unset;width:100%;text-align:left;border-radius:0;border:0;padding:calc(0.2*var(--ck-line-height-base)*var(--ck-font-size-base)) calc(0.4*var(--ck-line-height-base)*var(--ck-font-size-base))}.ck.ck-list__item .ck-button .ck-button__label{line-height:calc(1.2*var(--ck-line-height-base)*var(--ck-font-size-base))}.ck.ck-list__item .ck-button:active{box-shadow:none}.ck.ck-list__item .ck-button.ck-on{background:var(--ck-color-list-button-on-background);color:var(--ck-color-list-button-on-text)}.ck.ck-list__item .ck-button.ck-on:hover:not(ck-disabled){background:var(--ck-color-list-button-on-background-focus)}.ck.ck-list__item .ck-button.ck-on:active{box-shadow:none}.ck.ck-list__item .ck-button:hover:not(.ck-disabled){background:var(--ck-color-list-button-hover-background)}.ck.ck-list__item .ck-switchbutton.ck-on{background:var(--ck-color-list-background);color:inherit}.ck.ck-list__item .ck-switchbutton.ck-on:hover:not(ck-disabled){background:var(--ck-color-list-button-hover-background);color:inherit}.ck.ck-list__separator{height:1px;width:100%;background:var(--ck-color-base-border)}.ck.ck-button.ck-switchbutton .ck-button__toggle,.ck.ck-button.ck-switchbutton .ck-button__toggle .ck-button__toggle__inner{display:block}:root{--ck-switch-button-toggle-width:2.6153846154em;--ck-switch-button-toggle-inner-size:1.0769230769em;--ck-switch-button-toggle-spacing:1px;--ck-switch-button-translation:1.3846153847em}[dir=ltr] .ck.ck-button.ck-switchbutton .ck-button__label{margin-right:calc(2*var(--ck-spacing-large))}[dir=rtl] .ck.ck-button.ck-switchbutton .ck-button__label{margin-left:calc(2*var(--ck-spacing-large))}.ck.ck-button.ck-switchbutton.ck-disabled .ck-button__toggle{opacity:var(--ck-disabled-opacity)}.ck.ck-button.ck-switchbutton .ck-button__toggle{border-radius:0}.ck-rounded-corners .ck.ck-button.ck-switchbutton .ck-button__toggle,.ck.ck-button.ck-switchbutton .ck-button__toggle.ck-rounded-corners{border-radius:var(--ck-border-radius)}[dir=ltr] .ck.ck-button.ck-switchbutton .ck-button__toggle{margin-left:auto}[dir=rtl] .ck.ck-button.ck-switchbutton .ck-button__toggle{margin-right:auto}.ck.ck-button.ck-switchbutton .ck-button__toggle{transition:background .4s ease;width:var(--ck-switch-button-toggle-width);background:var(--ck-color-switch-button-off-background)}.ck.ck-button.ck-switchbutton .ck-button__toggle:hover{background:var(--ck-color-switch-button-off-hover-background)}.ck.ck-button.ck-switchbutton .ck-button__toggle:hover .ck-button__toggle__inner{box-shadow:0 0 0 5px var(--ck-color-switch-button-inner-shadow)}.ck.ck-button.ck-switchbutton .ck-button__toggle .ck-button__toggle__inner{border-radius:0}.ck-rounded-corners .ck.ck-button.ck-switchbutton .ck-button__toggle .ck-button__toggle__inner,.ck.ck-button.ck-switchbutton .ck-button__toggle .ck-button__toggle__inner.ck-rounded-corners{border-radius:var(--ck-border-radius);border-radius:calc(0.5*var(--ck-border-radius))}.ck.ck-button.ck-switchbutton .ck-button__toggle .ck-button__toggle__inner{margin:var(--ck-switch-button-toggle-spacing);width:var(--ck-switch-button-toggle-inner-size);height:var(--ck-switch-button-toggle-inner-size);background:var(--ck-color-switch-button-inner-background);transition:all .3s ease}.ck.ck-button.ck-switchbutton.ck-on .ck-button__toggle{background:var(--ck-color-switch-button-on-background)}.ck.ck-button.ck-switchbutton.ck-on .ck-button__toggle:hover{background:var(--ck-color-switch-button-on-hover-background)}[dir=ltr] .ck.ck-button.ck-switchbutton.ck-on .ck-button__toggle .ck-button__toggle__inner{transform:translateX(var(--ck-switch-button-translation))}[dir=rtl] .ck.ck-button.ck-switchbutton.ck-on .ck-button__toggle .ck-button__toggle__inner{transform:translateX(calc(-1*var(--ck-switch-button-translation)))}.ck.ck-toolbar-dropdown .ck-toolbar{flex-wrap:nowrap}.ck.ck-toolbar-dropdown .ck-dropdown__panel .ck-button:focus{z-index:calc(var(--ck-z-default) + 1)}.ck.ck-toolbar-dropdown .ck-toolbar{border:0}.ck.ck-dropdown .ck-dropdown__panel .ck-list{border-radius:0}.ck-rounded-corners .ck.ck-dropdown .ck-dropdown__panel .ck-list,.ck.ck-dropdown .ck-dropdown__panel .ck-list.ck-rounded-corners{border-radius:var(--ck-border-radius);border-top-left-radius:0}.ck.ck-dropdown .ck-dropdown__panel .ck-list .ck-list__item:first-child .ck-button{border-radius:0}.ck-rounded-corners .ck.ck-dropdown .ck-dropdown__panel .ck-list .ck-list__item:first-child .ck-button,.ck.ck-dropdown .ck-dropdown__panel .ck-list .ck-list__item:first-child .ck-button.ck-rounded-corners{border-radius:var(--ck-border-radius);border-top-left-radius:0;border-bottom-left-radius:0;border-bottom-right-radius:0}.ck.ck-dropdown .ck-dropdown__panel .ck-list .ck-list__item:last-child .ck-button{border-radius:0}.ck-rounded-corners .ck.ck-dropdown .ck-dropdown__panel .ck-list .ck-list__item:last-child .ck-button,.ck.ck-dropdown .ck-dropdown__panel .ck-list .ck-list__item:last-child .ck-button.ck-rounded-corners{border-radius:var(--ck-border-radius);border-top-left-radius:0;border-top-right-radius:0}.ck.ck-heading_heading1{font-size:20px}.ck.ck-heading_heading2{font-size:17px}.ck.ck-heading_heading3{font-size:14px}.ck[class*=ck-heading_heading]{font-weight:700}.ck.ck-dropdown.ck-heading-dropdown .ck-dropdown__button .ck-button__label{width:8em}.ck.ck-dropdown.ck-heading-dropdown .ck-dropdown__panel .ck-list__item{min-width:18em}.ck-content .image>figcaption{display:table-caption;caption-side:bottom;word-break:break-word;color:#333;background-color:#f7f7f7;padding:.6em;font-size:.75em;outline-offset:-1px}:root{--ck-image-style-spacing:1.5em}.ck-content .image-style-align-center:not(.image_resized),.ck-content .image-style-align-left:not(.image_resized),.ck-content .image-style-align-right:not(.image_resized),.ck-content .image-style-side:not(.image_resized){max-width:50%}.ck-content .image-style-side{float:right;margin-left:var(--ck-image-style-spacing)}.ck-content .image-style-align-left{float:left;margin-right:var(--ck-image-style-spacing)}.ck-content .image-style-align-center{margin-left:auto;margin-right:auto}.ck-content .image-style-align-right{float:right;margin-left:var(--ck-image-style-spacing)}.ck .ck-link_selected{background:var(--ck-color-link-selected-background)}.ck.ck-link-form{display:flex}.ck.ck-link-form .ck-label{display:none}@media screen and (max-width:600px){.ck.ck-link-form{flex-wrap:wrap}.ck.ck-link-form .ck-labeled-input{flex-basis:100%}.ck.ck-link-form .ck-button{flex-basis:50%}}.ck.ck-link-form_layout-vertical{display:block}.ck.ck-link-form{padding:var(--ck-spacing-standard)}.ck.ck-link-form:focus{outline:none}[dir=ltr] .ck.ck-link-form>:not(:first-child),[dir=rtl] .ck.ck-link-form>:not(:last-child){margin-left:var(--ck-spacing-standard)}@media screen and (max-width:600px){.ck.ck-link-form{padding:0;width:calc(0.8*var(--ck-input-text-width))}.ck.ck-link-form .ck-labeled-input{margin:var(--ck-spacing-standard) var(--ck-spacing-standard) 0}.ck.ck-link-form .ck-labeled-input .ck-input-text{min-width:0;width:100%}.ck.ck-link-form .ck-button{padding:var(--ck-spacing-standard);margin-top:var(--ck-spacing-standard);border-radius:0;border:0;border-top:1px solid var(--ck-color-base-border)}[dir=ltr] .ck.ck-link-form .ck-button{margin-left:0}[dir=ltr] .ck.ck-link-form .ck-button:first-of-type{border-right:1px solid var(--ck-color-base-border)}[dir=rtl] .ck.ck-link-form .ck-button{margin-left:0}[dir=rtl] .ck.ck-link-form .ck-button:last-of-type{border-right:1px solid var(--ck-color-base-border)}}.ck.ck-link-form_layout-vertical{padding:0;min-width:var(--ck-input-text-width)}.ck.ck-link-form_layout-vertical .ck-labeled-input{margin:var(--ck-spacing-standard) var(--ck-spacing-standard) var(--ck-spacing-small)}.ck.ck-link-form_layout-vertical .ck-labeled-input .ck-input-text{min-width:0;width:100%}.ck.ck-link-form_layout-vertical .ck-button{padding:var(--ck-spacing-standard);margin:0;border-radius:0;border:0;border-top:1px solid var(--ck-color-base-border);width:50%}[dir=ltr] .ck.ck-link-form_layout-vertical .ck-button{margin-left:0}[dir=ltr] .ck.ck-link-form_layout-vertical .ck-button:first-of-type{border-right:1px solid var(--ck-color-base-border)}[dir=rtl] .ck.ck-link-form_layout-vertical .ck-button{margin-left:0}[dir=rtl] .ck.ck-link-form_layout-vertical .ck-button:last-of-type{border-right:1px solid var(--ck-color-base-border)}.ck.ck-link-form_layout-vertical .ck.ck-list{margin-left:0}.ck.ck-link-form_layout-vertical .ck.ck-list .ck-button.ck-switchbutton{border:0;width:100%}.ck.ck-link-form_layout-vertical .ck.ck-list .ck-button.ck-switchbutton:hover{background:none}.ck.ck-link-actions{display:flex;flex-direction:row;flex-wrap:nowrap}.ck.ck-link-actions .ck-link-actions__preview{display:inline-block}.ck.ck-link-actions .ck-link-actions__preview .ck-button__label{overflow:hidden}@media screen and (max-width:600px){.ck.ck-link-actions{flex-wrap:wrap}.ck.ck-link-actions .ck-link-actions__preview{flex-basis:100%}.ck.ck-link-actions .ck-button:not(.ck-link-actions__preview){flex-basis:50%}}.ck.ck-link-actions{padding:var(--ck-spacing-standard)}.ck.ck-link-actions .ck-button.ck-link-actions__preview{padding-left:0;padding-right:0}.ck.ck-link-actions .ck-button.ck-link-actions__preview,.ck.ck-link-actions .ck-button.ck-link-actions__preview:active,.ck.ck-link-actions .ck-button.ck-link-actions__preview:focus,.ck.ck-link-actions .ck-button.ck-link-actions__preview:hover{background:none}.ck.ck-link-actions .ck-button.ck-link-actions__preview:active{box-shadow:none}.ck.ck-link-actions .ck-button.ck-link-actions__preview:focus .ck-button__label{text-decoration:underline}.ck.ck-link-actions .ck-button.ck-link-actions__preview .ck-button__label{padding:0 var(--ck-spacing-medium);color:var(--ck-color-link-default);text-overflow:ellipsis;cursor:pointer;max-width:var(--ck-input-text-width);min-width:3em;text-align:center}.ck.ck-link-actions .ck-button.ck-link-actions__preview .ck-button__label:hover{text-decoration:underline}.ck.ck-link-actions:focus{outline:none}[dir=ltr] .ck.ck-link-actions .ck-button:not(:first-child),[dir=rtl] .ck.ck-link-actions .ck-button:not(:last-child){margin-left:var(--ck-spacing-standard)}@media screen and (max-width:600px){.ck.ck-link-actions{padding:0;width:calc(0.8*var(--ck-input-text-width))}.ck.ck-link-actions .ck-button.ck-link-actions__preview{margin:var(--ck-spacing-standard) var(--ck-spacing-standard) 0}.ck.ck-link-actions .ck-button.ck-link-actions__preview .ck-button__label{min-width:0;max-width:100%}.ck.ck-link-actions .ck-button:not(.ck-link-actions__preview){padding:var(--ck-spacing-standard);margin-top:var(--ck-spacing-standard);border-radius:0;border:0;border-top:1px solid var(--ck-color-base-border)}[dir=ltr] .ck.ck-link-actions .ck-button:not(.ck-link-actions__preview){margin-left:0}[dir=ltr] .ck.ck-link-actions .ck-button:not(.ck-link-actions__preview):first-of-type{border-right:1px solid var(--ck-color-base-border)}[dir=rtl] .ck.ck-link-actions .ck-button:not(.ck-link-actions__preview){margin-left:0}[dir=rtl] .ck.ck-link-actions .ck-button:not(.ck-link-actions__preview):last-of-type{border-right:1px solid var(--ck-color-base-border)}}.ck-media__wrapper .ck-media__placeholder{display:flex;flex-direction:column;align-items:center}.ck-media__wrapper .ck-media__placeholder .ck-media__placeholder__url .ck-tooltip{display:block}@media (hover:none){.ck-media__wrapper .ck-media__placeholder .ck-media__placeholder__url .ck-tooltip{display:none}}.ck-media__wrapper .ck-media__placeholder .ck-media__placeholder__url{max-width:100%;position:relative}.ck-media__wrapper .ck-media__placeholder .ck-media__placeholder__url:hover .ck-tooltip{visibility:visible;opacity:1}.ck-media__wrapper .ck-media__placeholder .ck-media__placeholder__url .ck-media__placeholder__url__text{overflow:hidden;display:block}.ck-media__wrapper[data-oembed-url*="facebook.com"] .ck-media__placeholder__icon *,.ck-media__wrapper[data-oembed-url*="google.com/maps"] .ck-media__placeholder__icon *,.ck-media__wrapper[data-oembed-url*="instagram.com"] .ck-media__placeholder__icon *,.ck-media__wrapper[data-oembed-url*="twitter.com"] .ck-media__placeholder__icon *{display:none}.ck-editor__editable:not(.ck-read-only) .ck-media__wrapper>:not(.ck-media__placeholder),.ck-editor__editable:not(.ck-read-only) .ck-widget:not(.ck-widget_selected) .ck-media__placeholder{pointer-events:none}:root{--ck-media-embed-placeholder-icon-size:3em;--ck-color-media-embed-placeholder-url-text:#757575;--ck-color-media-embed-placeholder-url-text-hover:var(--ck-color-base-text)}.ck-media__wrapper{margin:0 auto}.ck-media__wrapper .ck-media__placeholder{padding:calc(3*var(--ck-spacing-standard));background:var(--ck-color-base-foreground)}.ck-media__wrapper .ck-media__placeholder .ck-media__placeholder__icon{min-width:var(--ck-media-embed-placeholder-icon-size);height:var(--ck-media-embed-placeholder-icon-size);margin-bottom:var(--ck-spacing-large);background-position:50%;background-size:cover}.ck-media__wrapper .ck-media__placeholder .ck-media__placeholder__icon .ck-icon{width:100%;height:100%}.ck-media__wrapper .ck-media__placeholder .ck-media__placeholder__url .ck-media__placeholder__url__text{color:var(--ck-color-media-embed-placeholder-url-text);white-space:nowrap;text-align:center;font-style:italic;text-overflow:ellipsis}.ck-media__wrapper .ck-media__placeholder .ck-media__placeholder__url .ck-media__placeholder__url__text:hover{color:var(--ck-color-media-embed-placeholder-url-text-hover);cursor:pointer;text-decoration:underline}.ck-media__wrapper[data-oembed-url*="open.spotify.com"]{max-width:300px;max-height:380px}.ck-media__wrapper[data-oembed-url*="twitter.com"] .ck.ck-media__placeholder{background:linear-gradient(90deg,#71c6f4,#0d70a5)}.ck-media__wrapper[data-oembed-url*="twitter.com"] .ck.ck-media__placeholder .ck-media__placeholder__icon{background-image:url(data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCA0MDAgNDAwIj48cGF0aCBkPSJNNDAwIDIwMGMwIDExMC41LTg5LjUgMjAwLTIwMCAyMDBTMCAzMTAuNSAwIDIwMCA4OS41IDAgMjAwIDBzMjAwIDg5LjUgMjAwIDIwMHpNMTYzLjQgMzA1LjVjODguNyAwIDEzNy4yLTczLjUgMTM3LjItMTM3LjIgMC0yLjEgMC00LjItLjEtNi4yIDkuNC02LjggMTcuNi0xNS4zIDI0LjEtMjUtOC42IDMuOC0xNy45IDYuNC0yNy43IDcuNiAxMC02IDE3LjYtMTUuNCAyMS4yLTI2LjctOS4zIDUuNS0xOS42IDkuNS0zMC42IDExLjctOC44LTkuNC0yMS4zLTE1LjItMzUuMi0xNS4yLTI2LjYgMC00OC4yIDIxLjYtNDguMiA0OC4yIDAgMy44LjQgNy41IDEuMyAxMS00MC4xLTItNzUuNi0yMS4yLTk5LjQtNTAuNC00LjEgNy4xLTYuNSAxNS40LTYuNSAyNC4yIDAgMTYuNyA4LjUgMzEuNSAyMS41IDQwLjEtNy45LS4yLTE1LjMtMi40LTIxLjgtNnYuNmMwIDIzLjQgMTYuNiA0Mi44IDM4LjcgNDcuMy00IDEuMS04LjMgMS43LTEyLjcgMS43LTMuMSAwLTYuMS0uMy05LjEtLjkgNi4xIDE5LjIgMjMuOSAzMy4xIDQ1IDMzLjUtMTYuNSAxMi45LTM3LjMgMjAuNi01OS45IDIwLjYtMy45IDAtNy43LS4yLTExLjUtLjcgMjEuMSAxMy44IDQ2LjUgMjEuOCA3My43IDIxLjgiIGZpbGw9IiNmZmYiLz48L3N2Zz4=)}.ck-media__wrapper[data-oembed-url*="twitter.com"] .ck.ck-media__placeholder .ck-media__placeholder__url__text{color:#b8e6ff}.ck-media__wrapper[data-oembed-url*="twitter.com"] .ck.ck-media__placeholder .ck-media__placeholder__url__text:hover{color:#fff}.ck-media__wrapper[data-oembed-url*="google.com/maps"] .ck-media__placeholder__icon{background-image:url(data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHdpZHRoPSIyNTAuMzc4IiBoZWlnaHQ9IjI1NC4xNjciIHZpZXdCb3g9IjAgMCA2Ni4yNDYgNjcuMjQ4Ij48ZyB0cmFuc2Zvcm09InRyYW5zbGF0ZSgtMTcyLjUzMSAtMjE4LjQ1NSkgc2NhbGUoLjk4MDEyKSI+PHJlY3Qgcnk9IjUuMjM4IiByeD0iNS4yMzgiIHk9IjIzMS4zOTkiIHg9IjE3Ni4wMzEiIGhlaWdodD0iNjAuMDk5IiB3aWR0aD0iNjAuMDk5IiBmaWxsPSIjMzRhNjY4IiBwYWludC1vcmRlcj0ibWFya2VycyBzdHJva2UgZmlsbCIvPjxwYXRoIGQ9Ik0yMDYuNDc3IDI2MC45bC0yOC45ODcgMjguOTg3YTUuMjE4IDUuMjE4IDAgMDAzLjc4IDEuNjFoNDkuNjIxYzEuNjk0IDAgMy4xOS0uNzk4IDQuMTQ2LTIuMDM3eiIgZmlsbD0iIzVjODhjNSIvPjxwYXRoIGQ9Ik0yMjYuNzQyIDIyMi45ODhjLTkuMjY2IDAtMTYuNzc3IDcuMTctMTYuNzc3IDE2LjAxNC4wMDcgMi43NjIuNjYzIDUuNDc0IDIuMDkzIDcuODc1LjQzLjcwMy44MyAxLjQwOCAxLjE5IDIuMTA3LjMzMy41MDIuNjUgMS4wMDUuOTUgMS41MDguMzQzLjQ3Ny42NzMuOTU3Ljk4OCAxLjQ0IDEuMzEgMS43NjkgMi41IDMuNTAyIDMuNjM3IDUuMTY4Ljc5MyAxLjI3NSAxLjY4MyAyLjY0IDIuNDY2IDMuOTkgMi4zNjMgNC4wOTQgNC4wMDcgOC4wOTIgNC42IDEzLjkxNHYuMDEyYy4xODIuNDEyLjUxNi42NjYuODc5LjY2Ny40MDMtLjAwMS43NjgtLjMxNC45My0uNzk5LjYwMy01Ljc1NiAyLjIzOC05LjcyOSA0LjU4NS0xMy43OTQuNzgyLTEuMzUgMS42NzMtMi43MTUgMi40NjUtMy45OSAxLjEzNy0xLjY2NiAyLjMyOC0zLjQgMy42MzgtNS4xNjkuMzE1LS40ODIuNjQ1LS45NjIuOTg4LTEuNDM5LjMtLjUwMy42MTctMS4wMDYuOTUtMS41MDguMzU5LS43Ljc2LTEuNDA0IDEuMTktMi4xMDcgMS40MjYtMi40MDIgMi01LjExNCAyLjAwNC03Ljg3NSAwLTguODQ0LTcuNTExLTE2LjAxNC0xNi43NzYtMTYuMDE0eiIgZmlsbD0iI2RkNGIzZSIgcGFpbnQtb3JkZXI9Im1hcmtlcnMgc3Ryb2tlIGZpbGwiLz48ZWxsaXBzZSByeT0iNS41NjQiIHJ4PSI1LjgyOCIgY3k9IjIzOS4wMDIiIGN4PSIyMjYuNzQyIiBmaWxsPSIjODAyZDI3IiBwYWludC1vcmRlcj0ibWFya2VycyBzdHJva2UgZmlsbCIvPjxwYXRoIGQ9Ik0xOTAuMzAxIDIzNy4yODNjLTQuNjcgMC04LjQ1NyAzLjg1My04LjQ1NyA4LjYwNnMzLjc4NiA4LjYwNyA4LjQ1NyA4LjYwN2MzLjA0MyAwIDQuODA2LS45NTggNi4zMzctMi41MTYgMS41My0xLjU1NyAyLjA4Ny0zLjkxMyAyLjA4Ny02LjI5IDAtLjM2Mi0uMDIzLS43MjItLjA2NC0xLjA3OWgtOC4yNTd2My4wNDNoNC44NWMtLjE5Ny43NTktLjUzMSAxLjQ1LTEuMDU4IDEuOTg2LS45NDIuOTU4LTIuMDI4IDEuNTQ4LTMuOTAxIDEuNTQ4LTIuODc2IDAtNS4yMDgtMi4zNzItNS4yMDgtNS4yOTkgMC0yLjkyNiAyLjMzMi01LjI5OSA1LjIwOC01LjI5OSAxLjM5OSAwIDIuNjE4LjQwNyAzLjU4NCAxLjI5M2wyLjM4MS0yLjM4YzAtLjAwMi0uMDAzLS4wMDQtLjAwNC0uMDA1LTEuNTg4LTEuNTI0LTMuNjItMi4yMTUtNS45NTUtMi4yMTV6bTQuNDMgNS42NmwuMDAzLjAwNnYtLjAwM3oiIGZpbGw9IiNmZmYiIHBhaW50LW9yZGVyPSJtYXJrZXJzIHN0cm9rZSBmaWxsIi8+PHBhdGggZD0iTTIxNS4xODQgMjUxLjkyOWwtNy45OCA3Ljk3OSAyOC40NzcgMjguNDc1YTUuMjMzIDUuMjMzIDAgMDAuNDQ5LTIuMTIzdi0zMS4xNjVjLS40NjkuNjc1LS45MzQgMS4zNDktMS4zODIgMi4wMDUtLjc5MiAxLjI3NS0xLjY4MiAyLjY0LTIuNDY1IDMuOTktMi4zNDcgNC4wNjUtMy45ODIgOC4wMzgtNC41ODUgMTMuNzk0LS4xNjIuNDg1LS41MjcuNzk4LS45My43OTktLjM2My0uMDAxLS42OTctLjI1NS0uODc5LS42Njd2LS4wMTJjLS41OTMtNS44MjItMi4yMzctOS44Mi00LjYtMTMuOTE0LS43ODMtMS4zNS0xLjY3My0yLjcxNS0yLjQ2Ni0zLjk5LTEuMTM3LTEuNjY2LTIuMzI3LTMuNC0zLjYzNy01LjE2OWwtLjAwMi0uMDAzeiIgZmlsbD0iI2MzYzNjMyIvPjxwYXRoIGQ9Ik0yMTIuOTgzIDI0OC40OTVsLTM2Ljk1MiAzNi45NTN2LjgxMmE1LjIyNyA1LjIyNyAwIDAwNS4yMzggNS4yMzhoMS4wMTVsMzUuNjY2LTM1LjY2NmExMzYuMjc1IDEzNi4yNzUgMCAwMC0yLjc2NC0zLjkgMzcuNTc1IDM3LjU3NSAwIDAwLS45ODktMS40NCAzNS4xMjcgMzUuMTI3IDAgMDAtLjk1LTEuNTA4Yy0uMDgzLS4xNjItLjE3Ni0uMzI2LS4yNjQtLjQ4OXoiIGZpbGw9IiNmZGRjNGYiIHBhaW50LW9yZGVyPSJtYXJrZXJzIHN0cm9rZSBmaWxsIi8+PHBhdGggZD0iTTIxMS45OTggMjYxLjA4M2wtNi4xNTIgNi4xNTEgMjQuMjY0IDI0LjI2NGguNzgxYTUuMjI3IDUuMjI3IDAgMDA1LjIzOS01LjIzOHYtMS4wNDV6IiBmaWxsPSIjZmZmIiBwYWludC1vcmRlcj0ibWFya2VycyBzdHJva2UgZmlsbCIvPjwvZz48L3N2Zz4=)}.ck-media__wrapper[data-oembed-url*="facebook.com"] .ck-media__placeholder{background:#4268b3}.ck-media__wrapper[data-oembed-url*="facebook.com"] .ck-media__placeholder .ck-media__placeholder__icon{background-image:url(data:image/svg+xml;base64,PHN2ZyB3aWR0aD0iMTAyNCIgaGVpZ2h0PSIxMDI0IiB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciPjxwYXRoIGQ9Ik05NjcuNDg0IDBINTYuNTE3QzI1LjMwNCAwIDAgMjUuMzA0IDAgNTYuNTE3djkxMC45NjZDMCA5OTguNjk0IDI1LjI5NyAxMDI0IDU2LjUyMiAxMDI0SDU0N1Y2MjhINDE0VjQ3M2gxMzNWMzU5LjAyOWMwLTEzMi4yNjIgODAuNzczLTIwNC4yODIgMTk4Ljc1Ni0yMDQuMjgyIDU2LjUxMyAwIDEwNS4wODYgNC4yMDggMTE5LjI0NCA2LjA4OVYyOTlsLTgxLjYxNi4wMzdjLTYzLjk5MyAwLTc2LjM4NCAzMC40OTItNzYuMzg0IDc1LjIzNlY0NzNoMTUzLjQ4N2wtMTkuOTg2IDE1NUg3MDd2Mzk2aDI2MC40ODRjMzEuMjEzIDAgNTYuNTE2LTI1LjMwMyA1Ni41MTYtNTYuNTE2VjU2LjUxNUMxMDI0IDI1LjMwMyA5OTguNjk3IDAgOTY3LjQ4NCAwIiBmaWxsPSIjRkZGRkZFIiBmaWxsLXJ1bGU9ImV2ZW5vZGQiLz48L3N2Zz4=)}.ck-media__wrapper[data-oembed-url*="facebook.com"] .ck-media__placeholder .ck-media__placeholder__url__text{color:#cdf}.ck-media__wrapper[data-oembed-url*="facebook.com"] .ck-media__placeholder .ck-media__placeholder__url__text:hover{color:#fff}.ck-media__wrapper[data-oembed-url*="instagram.com"] .ck-media__placeholder{background:linear-gradient(-135deg,#1400c8,#b900b4,#f50000)}.ck-media__wrapper[data-oembed-url*="instagram.com"] .ck-media__placeholder .ck-media__placeholder__icon{background-image:url(data:image/svg+xml;base64,PHN2ZyB3aWR0aD0iNTA0IiBoZWlnaHQ9IjUwNCIgeG1sbnM9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnIiB4bWxuczp4bGluaz0iaHR0cDovL3d3dy53My5vcmcvMTk5OS94bGluayI+PGRlZnM+PHBhdGggaWQ9ImEiIGQ9Ik0wIC4xNTloNTAzLjg0MVY1MDMuOTRIMHoiLz48L2RlZnM+PGcgZmlsbD0ibm9uZSIgZmlsbC1ydWxlPSJldmVub2RkIj48bWFzayBpZD0iYiIgZmlsbD0iI2ZmZiI+PHVzZSB4bGluazpocmVmPSIjYSIvPjwvbWFzaz48cGF0aCBkPSJNMjUxLjkyMS4xNTljLTY4LjQxOCAwLTc2Ljk5Ny4yOS0xMDMuODY3IDEuNTE2LTI2LjgxNCAxLjIyMy00NS4xMjcgNS40ODItNjEuMTUxIDExLjcxLTE2LjU2NiA2LjQzNy0zMC42MTUgMTUuMDUxLTQ0LjYyMSAyOS4wNTYtMTQuMDA1IDE0LjAwNi0yMi42MTkgMjguMDU1LTI5LjA1NiA0NC42MjEtNi4yMjggMTYuMDI0LTEwLjQ4NyAzNC4zMzctMTEuNzEgNjEuMTUxQy4yOSAxNzUuMDgzIDAgMTgzLjY2MiAwIDI1Mi4wOGMwIDY4LjQxNy4yOSA3Ni45OTYgMS41MTYgMTAzLjg2NiAxLjIyMyAyNi44MTQgNS40ODIgNDUuMTI3IDExLjcxIDYxLjE1MSA2LjQzNyAxNi41NjYgMTUuMDUxIDMwLjYxNSAyOS4wNTYgNDQuNjIxIDE0LjAwNiAxNC4wMDUgMjguMDU1IDIyLjYxOSA0NC42MjEgMjkuMDU3IDE2LjAyNCA2LjIyNyAzNC4zMzcgMTAuNDg2IDYxLjE1MSAxMS43MDkgMjYuODcgMS4yMjYgMzUuNDQ5IDEuNTE2IDEwMy44NjcgMS41MTYgNjguNDE3IDAgNzYuOTk2LS4yOSAxMDMuODY2LTEuNTE2IDI2LjgxNC0xLjIyMyA0NS4xMjctNS40ODIgNjEuMTUxLTExLjcwOSAxNi41NjYtNi40MzggMzAuNjE1LTE1LjA1MiA0NC42MjEtMjkuMDU3IDE0LjAwNS0xNC4wMDYgMjIuNjE5LTI4LjA1NSAyOS4wNTctNDQuNjIxIDYuMjI3LTE2LjAyNCAxMC40ODYtMzQuMzM3IDExLjcwOS02MS4xNTEgMS4yMjYtMjYuODcgMS41MTYtMzUuNDQ5IDEuNTE2LTEwMy44NjYgMC02OC40MTgtLjI5LTc2Ljk5Ny0xLjUxNi0xMDMuODY3LTEuMjIzLTI2LjgxNC01LjQ4Mi00NS4xMjctMTEuNzA5LTYxLjE1MS02LjQzOC0xNi41NjYtMTUuMDUyLTMwLjYxNS0yOS4wNTctNDQuNjIxLTE0LjAwNi0xNC4wMDUtMjguMDU1LTIyLjYxOS00NC42MjEtMjkuMDU2LTE2LjAyNC02LjIyOC0zNC4zMzctMTAuNDg3LTYxLjE1MS0xMS43MUMzMjguOTE3LjQ0OSAzMjAuMzM4LjE1OSAyNTEuOTIxLjE1OXptMCA0NS4zOTFjNjcuMjY1IDAgNzUuMjMzLjI1NyAxMDEuNzk3IDEuNDY5IDI0LjU2MiAxLjEyIDM3LjkwMSA1LjIyNCA0Ni43NzggOC42NzQgMTEuNzU5IDQuNTcgMjAuMTUxIDEwLjAyOSAyOC45NjYgMTguODQ1IDguODE2IDguODE1IDE0LjI3NSAxNy4yMDcgMTguODQ1IDI4Ljk2NiAzLjQ1IDguODc3IDcuNTU0IDIyLjIxNiA4LjY3NCA0Ni43NzggMS4yMTIgMjYuNTY0IDEuNDY5IDM0LjUzMiAxLjQ2OSAxMDEuNzk4IDAgNjcuMjY1LS4yNTcgNzUuMjMzLTEuNDY5IDEwMS43OTctMS4xMiAyNC41NjItNS4yMjQgMzcuOTAxLTguNjc0IDQ2Ljc3OC00LjU3IDExLjc1OS0xMC4wMjkgMjAuMTUxLTE4Ljg0NSAyOC45NjYtOC44MTUgOC44MTYtMTcuMjA3IDE0LjI3NS0yOC45NjYgMTguODQ1LTguODc3IDMuNDUtMjIuMjE2IDcuNTU0LTQ2Ljc3OCA4LjY3NC0yNi41NiAxLjIxMi0zNC41MjcgMS40NjktMTAxLjc5NyAxLjQ2OS02Ny4yNzEgMC03NS4yMzctLjI1Ny0xMDEuNzk4LTEuNDY5LTI0LjU2Mi0xLjEyLTM3LjkwMS01LjIyNC00Ni43NzgtOC42NzQtMTEuNzU5LTQuNTctMjAuMTUxLTEwLjAyOS0yOC45NjYtMTguODQ1LTguODE1LTguODE1LTE0LjI3NS0xNy4yMDctMTguODQ1LTI4Ljk2Ni0zLjQ1LTguODc3LTcuNTU0LTIyLjIxNi04LjY3NC00Ni43NzgtMS4yMTItMjYuNTY0LTEuNDY5LTM0LjUzMi0xLjQ2OS0xMDEuNzk3IDAtNjcuMjY2LjI1Ny03NS4yMzQgMS40NjktMTAxLjc5OCAxLjEyLTI0LjU2MiA1LjIyNC0zNy45MDEgOC42NzQtNDYuNzc4IDQuNTctMTEuNzU5IDEwLjAyOS0yMC4xNTEgMTguODQ1LTI4Ljk2NiA4LjgxNS04LjgxNiAxNy4yMDctMTQuMjc1IDI4Ljk2Ni0xOC44NDUgOC44NzctMy40NSAyMi4yMTYtNy41NTQgNDYuNzc4LTguNjc0IDI2LjU2NC0xLjIxMiAzNC41MzItMS40NjkgMTAxLjc5OC0xLjQ2OXoiIGZpbGw9IiNGRkYiIG1hc2s9InVybCgjYikiLz48cGF0aCBkPSJNMjUxLjkyMSAzMzYuMDUzYy00Ni4zNzggMC04My45NzQtMzcuNTk2LTgzLjk3NC04My45NzMgMC00Ni4zNzggMzcuNTk2LTgzLjk3NCA4My45NzQtODMuOTc0IDQ2LjM3NyAwIDgzLjk3MyAzNy41OTYgODMuOTczIDgzLjk3NCAwIDQ2LjM3Ny0zNy41OTYgODMuOTczLTgzLjk3MyA4My45NzN6bTAtMjEzLjMzOGMtNzEuNDQ3IDAtMTI5LjM2NSA1Ny45MTgtMTI5LjM2NSAxMjkuMzY1IDAgNzEuNDQ2IDU3LjkxOCAxMjkuMzY0IDEyOS4zNjUgMTI5LjM2NCA3MS40NDYgMCAxMjkuMzY0LTU3LjkxOCAxMjkuMzY0LTEyOS4zNjQgMC03MS40NDctNTcuOTE4LTEyOS4zNjUtMTI5LjM2NC0xMjkuMzY1ek00MTYuNjI3IDExNy42MDRjMCAxNi42OTYtMTMuNTM1IDMwLjIzLTMwLjIzMSAzMC4yMy0xNi42OTUgMC0zMC4yMy0xMy41MzQtMzAuMjMtMzAuMjMgMC0xNi42OTYgMTMuNTM1LTMwLjIzMSAzMC4yMy0zMC4yMzEgMTYuNjk2IDAgMzAuMjMxIDEzLjUzNSAzMC4yMzEgMzAuMjMxIiBmaWxsPSIjRkZGIi8+PC9nPjwvc3ZnPg==)}.ck-media__wrapper[data-oembed-url*="instagram.com"] .ck-media__placeholder .ck-media__placeholder__url__text{color:#ffe0fe}.ck-media__wrapper[data-oembed-url*="instagram.com"] .ck-media__placeholder .ck-media__placeholder__url__text:hover{color:#fff}.ck.ck-media-form{display:flex;align-items:flex-start;flex-direction:row;flex-wrap:nowrap}.ck.ck-media-form .ck-labeled-input{display:inline-block}.ck.ck-media-form .ck-label{display:none}@media screen and (max-width:600px){.ck.ck-media-form{flex-wrap:wrap}.ck.ck-media-form .ck-labeled-input{flex-basis:100%}.ck.ck-media-form .ck-button{flex-basis:50%}}.ck.ck-media-form{padding:var(--ck-spacing-standard)}.ck.ck-media-form:focus{outline:none}[dir=ltr] .ck.ck-media-form>:not(:first-child),[dir=rtl] .ck.ck-media-form>:not(:last-child){margin-left:var(--ck-spacing-standard)}@media screen and (max-width:600px){.ck.ck-media-form{padding:0;width:calc(0.8*var(--ck-input-text-width))}.ck.ck-media-form .ck-labeled-input{margin:var(--ck-spacing-standard) var(--ck-spacing-standard) 0}.ck.ck-media-form .ck-labeled-input .ck-input-text{min-width:0;width:100%}.ck.ck-media-form .ck-labeled-input .ck-labeled-input__error{white-space:normal}.ck.ck-media-form .ck-button{padding:var(--ck-spacing-standard);margin-top:var(--ck-spacing-standard);border-radius:0;border:0;border-top:1px solid var(--ck-color-base-border)}[dir=ltr] .ck.ck-media-form .ck-button{margin-left:0}[dir=ltr] .ck.ck-media-form .ck-button:first-of-type{border-right:1px solid var(--ck-color-base-border)}[dir=rtl] .ck.ck-media-form .ck-button{margin-left:0}[dir=rtl] .ck.ck-media-form .ck-button:last-of-type{border-right:1px solid var(--ck-color-base-border)}}.ck-content .media{clear:both;margin:1em 0;display:block;min-width:15em}:root{--ck-color-table-focused-cell-background:#f5fafe}.ck-widget.table td.ck-editor__nested-editable.ck-editor__nested-editable_focused,.ck-widget.table th.ck-editor__nested-editable.ck-editor__nested-editable_focused{background:var(--ck-color-table-focused-cell-background);border-style:none;outline:1px solid var(--ck-color-focus-border);outline-offset:-1px}:root{--ck-insert-table-dropdown-padding:10px;--ck-insert-table-dropdown-box-height:11px;--ck-insert-table-dropdown-box-width:12px;--ck-insert-table-dropdown-box-margin:1px;--ck-insert-table-dropdown-box-border-color:#bfbfbf;--ck-insert-table-dropdown-box-border-active-color:#53a0e4;--ck-insert-table-dropdown-box-active-background:#c7e5ff}.ck .ck-insert-table-dropdown__grid{display:flex;flex-direction:row;flex-wrap:wrap;width:calc(var(--ck-insert-table-dropdown-box-width)*10 + var(--ck-insert-table-dropdown-box-margin)*20 + var(--ck-insert-table-dropdown-padding)*2);padding:var(--ck-insert-table-dropdown-padding) var(--ck-insert-table-dropdown-padding) 0}.ck .ck-insert-table-dropdown__label{text-align:center}.ck .ck-insert-table-dropdown-grid-box{width:var(--ck-insert-table-dropdown-box-width);height:var(--ck-insert-table-dropdown-box-height);margin:var(--ck-insert-table-dropdown-box-margin);border:1px solid var(--ck-insert-table-dropdown-box-border-color);border-radius:1px}.ck .ck-insert-table-dropdown-grid-box.ck-on{border-color:var(--ck-insert-table-dropdown-box-border-active-color);background:var(--ck-insert-table-dropdown-box-active-background)}.ck-content .table{margin:1em auto;display:table}.ck-content .table table{border-collapse:collapse;border-spacing:0;border:1px double #b3b3b3}.ck-content .table table td,.ck-content .table table th{min-width:2em;padding:.4em;border-color:#d9d9d9}.ck-content .table table th{font-weight:700;background:#fafafa}</style><script src="./PrintArrayinRevers_files/f(1).txt"></script><style type="text/css">.MJXp-script {font-size: .8em}
.MJXp-right {-webkit-transform-origin: right; -moz-transform-origin: right; -ms-transform-origin: right; -o-transform-origin: right; transform-origin: right}
.MJXp-bold {font-weight: bold}
.MJXp-italic {font-style: italic}
.MJXp-scr {font-family: MathJax_Script,'Times New Roman',Times,STIXGeneral,serif}
.MJXp-frak {font-family: MathJax_Fraktur,'Times New Roman',Times,STIXGeneral,serif}
.MJXp-sf {font-family: MathJax_SansSerif,'Times New Roman',Times,STIXGeneral,serif}
.MJXp-cal {font-family: MathJax_Caligraphic,'Times New Roman',Times,STIXGeneral,serif}
.MJXp-mono {font-family: MathJax_Typewriter,'Times New Roman',Times,STIXGeneral,serif}
.MJXp-largeop {font-size: 150%}
.MJXp-largeop.MJXp-int {vertical-align: -.2em}
.MJXp-math {display: inline-block; line-height: 1.2; text-indent: 0; font-family: 'Times New Roman',Times,STIXGeneral,serif; white-space: nowrap; border-collapse: collapse}
.MJXp-display {display: block; text-align: center; margin: 1em 0}
.MJXp-math span {display: inline-block}
.MJXp-box {display: block!important; text-align: center}
.MJXp-box:after {content: " "}
.MJXp-rule {display: block!important; margin-top: .1em}
.MJXp-char {display: block!important}
.MJXp-mo {margin: 0 .15em}
.MJXp-mfrac {margin: 0 .125em; vertical-align: .25em}
.MJXp-denom {display: inline-table!important; width: 100%}
.MJXp-denom > * {display: table-row!important}
.MJXp-surd {vertical-align: top}
.MJXp-surd > * {display: block!important}
.MJXp-script-box > *  {display: table!important; height: 50%}
.MJXp-script-box > * > * {display: table-cell!important; vertical-align: top}
.MJXp-script-box > *:last-child > * {vertical-align: bottom}
.MJXp-script-box > * > * > * {display: block!important}
.MJXp-mphantom {visibility: hidden}
.MJXp-munderover, .MJXp-munder {display: inline-table!important}
.MJXp-over {display: inline-block!important; text-align: center}
.MJXp-over > * {display: block!important}
.MJXp-munderover > *, .MJXp-munder > * {display: table-row!important}
.MJXp-mtable {vertical-align: .25em; margin: 0 .125em}
.MJXp-mtable > * {display: inline-table!important; vertical-align: middle}
.MJXp-mtr {display: table-row!important}
.MJXp-mtd {display: table-cell!important; text-align: center; padding: .5em 0 0 .5em}
.MJXp-mtr > .MJXp-mtd:first-child {padding-left: 0}
.MJXp-mtr:first-child > .MJXp-mtd {padding-top: 0}
.MJXp-mlabeledtr {display: table-row!important}
.MJXp-mlabeledtr > .MJXp-mtd:first-child {padding-left: 0}
.MJXp-mlabeledtr:first-child > .MJXp-mtd {padding-top: 0}
.MJXp-merror {background-color: #FFFF88; color: #CC0000; border: 1px solid #CC0000; padding: 1px 3px; font-style: normal; font-size: 90%}
.MJXp-scale0 {-webkit-transform: scaleX(.0); -moz-transform: scaleX(.0); -ms-transform: scaleX(.0); -o-transform: scaleX(.0); transform: scaleX(.0)}
.MJXp-scale1 {-webkit-transform: scaleX(.1); -moz-transform: scaleX(.1); -ms-transform: scaleX(.1); -o-transform: scaleX(.1); transform: scaleX(.1)}
.MJXp-scale2 {-webkit-transform: scaleX(.2); -moz-transform: scaleX(.2); -ms-transform: scaleX(.2); -o-transform: scaleX(.2); transform: scaleX(.2)}
.MJXp-scale3 {-webkit-transform: scaleX(.3); -moz-transform: scaleX(.3); -ms-transform: scaleX(.3); -o-transform: scaleX(.3); transform: scaleX(.3)}
.MJXp-scale4 {-webkit-transform: scaleX(.4); -moz-transform: scaleX(.4); -ms-transform: scaleX(.4); -o-transform: scaleX(.4); transform: scaleX(.4)}
.MJXp-scale5 {-webkit-transform: scaleX(.5); -moz-transform: scaleX(.5); -ms-transform: scaleX(.5); -o-transform: scaleX(.5); transform: scaleX(.5)}
.MJXp-scale6 {-webkit-transform: scaleX(.6); -moz-transform: scaleX(.6); -ms-transform: scaleX(.6); -o-transform: scaleX(.6); transform: scaleX(.6)}
.MJXp-scale7 {-webkit-transform: scaleX(.7); -moz-transform: scaleX(.7); -ms-transform: scaleX(.7); -o-transform: scaleX(.7); transform: scaleX(.7)}
.MJXp-scale8 {-webkit-transform: scaleX(.8); -moz-transform: scaleX(.8); -ms-transform: scaleX(.8); -o-transform: scaleX(.8); transform: scaleX(.8)}
.MJXp-scale9 {-webkit-transform: scaleX(.9); -moz-transform: scaleX(.9); -ms-transform: scaleX(.9); -o-transform: scaleX(.9); transform: scaleX(.9)}
.MathJax_PHTML .noError {vertical-align: ; font-size: 90%; text-align: left; color: black; padding: 1px 3px; border: 1px solid}
</style><style type="text/css" data-fbcssmodules="css:fb.css.base css:fb.css.dialog css:fb.css.iframewidget css:fb.css.customer_chat_plugin_iframe">.fb_hidden{position:absolute;top:-10000px;z-index:10001}.fb_reposition{overflow:hidden;position:relative}.fb_invisible{display:none}.fb_reset{background:none;border:0;border-spacing:0;color:#000;cursor:auto;direction:ltr;font-family:"lucida grande", tahoma, verdana, arial, sans-serif;font-size:11px;font-style:normal;font-variant:normal;font-weight:normal;letter-spacing:normal;line-height:1;margin:0;overflow:visible;padding:0;text-align:left;text-decoration:none;text-indent:0;text-shadow:none;text-transform:none;visibility:visible;white-space:normal;word-spacing:normal}.fb_reset>div{overflow:hidden}@keyframes fb_transform{from{opacity:0;transform:scale(.95)}to{opacity:1;transform:scale(1)}}.fb_animate{animation:fb_transform .3s forwards}
.fb_dialog{background:rgba(82, 82, 82, .7);position:absolute;top:-10000px;z-index:10001}.fb_dialog_advanced{border-radius:8px;padding:10px}.fb_dialog_content{background:#fff;color:#373737}.fb_dialog_close_icon{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/yq/r/IE9JII6Z1Ys.png) no-repeat scroll 0 0 transparent;cursor:pointer;display:block;height:15px;position:absolute;right:18px;top:17px;width:15px}.fb_dialog_mobile .fb_dialog_close_icon{left:5px;right:auto;top:5px}.fb_dialog_padding{background-color:transparent;position:absolute;width:1px;z-index:-1}.fb_dialog_close_icon:hover{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/yq/r/IE9JII6Z1Ys.png) no-repeat scroll 0 -15px transparent}.fb_dialog_close_icon:active{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/yq/r/IE9JII6Z1Ys.png) no-repeat scroll 0 -30px transparent}.fb_dialog_iframe{line-height:0}.fb_dialog_content .dialog_title{background:#6d84b4;border:1px solid #365899;color:#fff;font-size:14px;font-weight:bold;margin:0}.fb_dialog_content .dialog_title>span{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/yd/r/Cou7n-nqK52.gif) no-repeat 5px 50%;float:left;padding:5px 0 7px 26px}body.fb_hidden{height:100%;left:0;margin:0;overflow:visible;position:absolute;top:-10000px;transform:none;width:100%}.fb_dialog.fb_dialog_mobile.loading{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/ya/r/3rhSv5V8j3o.gif) white no-repeat 50% 50%;min-height:100%;min-width:100%;overflow:hidden;position:absolute;top:0;z-index:10001}.fb_dialog.fb_dialog_mobile.loading.centered{background:none;height:auto;min-height:initial;min-width:initial;width:auto}.fb_dialog.fb_dialog_mobile.loading.centered #fb_dialog_loader_spinner{width:100%}.fb_dialog.fb_dialog_mobile.loading.centered .fb_dialog_content{background:none}.loading.centered #fb_dialog_loader_close{clear:both;color:#fff;display:block;font-size:18px;padding-top:20px}#fb-root #fb_dialog_ipad_overlay{background:rgba(0, 0, 0, .4);bottom:0;left:0;min-height:100%;position:absolute;right:0;top:0;width:100%;z-index:10000}#fb-root #fb_dialog_ipad_overlay.hidden{display:none}.fb_dialog.fb_dialog_mobile.loading iframe{visibility:hidden}.fb_dialog_mobile .fb_dialog_iframe{position:sticky;top:0}.fb_dialog_content .dialog_header{background:linear-gradient(from(#738aba), to(#2c4987));border-bottom:1px solid;border-color:#043b87;box-shadow:white 0 1px 1px -1px inset;color:#fff;font:bold 14px Helvetica, sans-serif;text-overflow:ellipsis;text-shadow:rgba(0, 30, 84, .296875) 0 -1px 0;vertical-align:middle;white-space:nowrap}.fb_dialog_content .dialog_header table{height:43px;width:100%}.fb_dialog_content .dialog_header td.header_left{font-size:12px;padding-left:5px;vertical-align:middle;width:60px}.fb_dialog_content .dialog_header td.header_right{font-size:12px;padding-right:5px;vertical-align:middle;width:60px}.fb_dialog_content .touchable_button{background:linear-gradient(from(#4267B2), to(#2a4887));background-clip:padding-box;border:1px solid #29487d;border-radius:3px;display:inline-block;line-height:18px;margin-top:3px;max-width:85px;padding:4px 12px;position:relative}.fb_dialog_content .dialog_header .touchable_button input{background:none;border:none;color:#fff;font:bold 12px Helvetica, sans-serif;margin:2px -12px;padding:2px 6px 3px 6px;text-shadow:rgba(0, 30, 84, .296875) 0 -1px 0}.fb_dialog_content .dialog_header .header_center{color:#fff;font-size:16px;font-weight:bold;line-height:18px;text-align:center;vertical-align:middle}.fb_dialog_content .dialog_content{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/y9/r/jKEcVPZFk-2.gif) no-repeat 50% 50%;border:1px solid #4a4a4a;border-bottom:0;border-top:0;height:150px}.fb_dialog_content .dialog_footer{background:#f5f6f7;border:1px solid #4a4a4a;border-top-color:#ccc;height:40px}#fb_dialog_loader_close{float:left}.fb_dialog.fb_dialog_mobile .fb_dialog_close_icon{visibility:hidden}#fb_dialog_loader_spinner{animation:rotateSpinner 1.2s linear infinite;background-color:transparent;background-image:url(https://static.xx.fbcdn.net/rsrc.php/v3/yD/r/t-wz8gw1xG1.png);background-position:50% 50%;background-repeat:no-repeat;height:24px;width:24px}@keyframes rotateSpinner{0%{transform:rotate(0deg)}100%{transform:rotate(360deg)}}
.fb_iframe_widget{display:inline-block;position:relative}.fb_iframe_widget span{display:inline-block;position:relative;text-align:justify}.fb_iframe_widget iframe{position:absolute}.fb_iframe_widget_fluid_desktop,.fb_iframe_widget_fluid_desktop span,.fb_iframe_widget_fluid_desktop iframe{max-width:100%}.fb_iframe_widget_fluid_desktop iframe{min-width:220px;position:relative}.fb_iframe_widget_lift{z-index:1}.fb_iframe_widget_fluid{display:inline}.fb_iframe_widget_fluid span{width:100%}
.fb_mpn_mobile_landing_page_slide_out{animation-duration:200ms;animation-name:fb_mpn_landing_page_slide_out;transition-timing-function:ease-in}.fb_mpn_mobile_landing_page_slide_out_from_left{animation-duration:200ms;animation-name:fb_mpn_landing_page_slide_out_from_left;transition-timing-function:ease-in}.fb_mpn_mobile_landing_page_slide_up{animation-duration:500ms;animation-name:fb_mpn_landing_page_slide_up;transition-timing-function:ease-in}.fb_mpn_mobile_bounce_in{animation-duration:300ms;animation-name:fb_mpn_bounce_in;transition-timing-function:ease-in}.fb_mpn_mobile_bounce_out{animation-duration:300ms;animation-name:fb_mpn_bounce_out;transition-timing-function:ease-in}.fb_mpn_mobile_bounce_out_v2{animation-duration:300ms;animation-name:fb_mpn_fade_out;transition-timing-function:ease-in}.fb_customer_chat_bounce_in_v2{animation-duration:300ms;animation-name:fb_bounce_in_v2;transition-timing-function:ease-in}.fb_customer_chat_bounce_in_from_left{animation-duration:300ms;animation-name:fb_bounce_in_from_left;transition-timing-function:ease-in}.fb_customer_chat_bounce_out_v2{animation-duration:300ms;animation-name:fb_bounce_out_v2;transition-timing-function:ease-in}.fb_customer_chat_bounce_out_from_left{animation-duration:300ms;animation-name:fb_bounce_out_from_left;transition-timing-function:ease-in}.fb_customer_chat_bubble_animated_no_badge{box-shadow:0 3px 12px rgba(0, 0, 0, .15);transition:box-shadow 150ms linear}.fb_customer_chat_bubble_animated_no_badge:hover{box-shadow:0 5px 24px rgba(0, 0, 0, .3)}.fb_customer_chat_bubble_animated_with_badge{box-shadow:-5px 4px 14px rgba(0, 0, 0, .15);transition:box-shadow 150ms linear}.fb_customer_chat_bubble_animated_with_badge:hover{box-shadow:-5px 8px 24px rgba(0, 0, 0, .2)}.fb_invisible_flow{display:inherit;height:0;overflow-x:hidden;width:0}.fb_new_ui_mobile_overlay_active{overflow:hidden}@keyframes fb_mpn_landing_page_slide_in{0%{border-radius:50%;margin:0 24px;width:60px}40%{border-radius:18px}100%{margin:0 12px;width:100% - 24px}}@keyframes fb_mpn_landing_page_slide_in_from_left{0%{border-radius:50%;left:12px;margin:0 24px;width:60px}40%{border-radius:18px}100%{left:12px;margin:0 12px;width:100% - 24px}}@keyframes fb_mpn_landing_page_slide_out{0%{margin:0 12px;width:100% - 24px}60%{border-radius:18px}100%{border-radius:50%;margin:0 24px;width:60px}}@keyframes fb_mpn_landing_page_slide_out_from_left{0%{left:12px;width:100% - 24px}60%{border-radius:18px}100%{border-radius:50%;left:12px;width:60px}}@keyframes fb_mpn_landing_page_slide_up{0%{bottom:0;opacity:0}100%{bottom:24px;opacity:1}}@keyframes fb_mpn_bounce_in{0%{opacity:.5;top:100%}100%{opacity:1;top:0}}@keyframes fb_mpn_fade_out{0%{bottom:30px;opacity:1}100%{bottom:0;opacity:0}}@keyframes fb_mpn_bounce_out{0%{opacity:1;top:0}100%{opacity:.5;top:100%}}@keyframes fb_bounce_in_v2{0%{opacity:0;transform:scale(0, 0);transform-origin:bottom right}50%{transform:scale(1.03, 1.03);transform-origin:bottom right}100%{opacity:1;transform:scale(1, 1);transform-origin:bottom right}}@keyframes fb_bounce_in_from_left{0%{opacity:0;transform:scale(0, 0);transform-origin:bottom left}50%{transform:scale(1.03, 1.03);transform-origin:bottom left}100%{opacity:1;transform:scale(1, 1);transform-origin:bottom left}}@keyframes fb_bounce_out_v2{0%{opacity:1;transform:scale(1, 1);transform-origin:bottom right}100%{opacity:0;transform:scale(0, 0);transform-origin:bottom right}}@keyframes fb_bounce_out_from_left{0%{opacity:1;transform:scale(1, 1);transform-origin:bottom left}100%{opacity:0;transform:scale(0, 0);transform-origin:bottom left}}@keyframes fb_bounce_out_v2_mobile_chat_started{0%{opacity:1;top:0}100%{opacity:0;top:20px}}@keyframes fb_customer_chat_bubble_bounce_in_animation{0%{bottom:6pt;opacity:0;transform:scale(0, 0);transform-origin:center}70%{bottom:18pt;opacity:1;transform:scale(1.2, 1.2)}100%{transform:scale(1, 1)}}@keyframes slideInFromBottom{0%{opacity:.1;transform:translateY(100%)}100%{opacity:1;transform:translateY(0)}}@keyframes slideInFromBottomDelay{0%{opacity:0;transform:translateY(100%)}97%{opacity:0;transform:translateY(100%)}100%{opacity:1;transform:translateY(0)}}</style></head>

    <body><style type="text/css">html.hs-messages-widget-open.hs-messages-mobile,html.hs-messages-widget-open.hs-messages-mobile body{overflow:hidden!important;position:relative!important}html.hs-messages-widget-open.hs-messages-mobile body{height:100%!important;margin:0!important}#hubspot-messages-iframe-container{display:initial!important;z-index:2147483647;position:fixed!important;bottom:0!important}#hubspot-messages-iframe-container.widget-align-left{left:0!important}#hubspot-messages-iframe-container.widget-align-right{right:0!important}#hubspot-messages-iframe-container.internal{z-index:1016}#hubspot-messages-iframe-container.internal iframe{min-width:108px}#hubspot-messages-iframe-container .shadow-container{display:initial!important;z-index:-1;position:absolute;width:0;height:0;bottom:0;content:""}#hubspot-messages-iframe-container .shadow-container.internal{display:none!important}#hubspot-messages-iframe-container .shadow-container.active{width:400px;height:400px}#hubspot-messages-iframe-container iframe{display:initial!important;width:100%!important;height:100%!important;border:none!important;position:absolute!important;bottom:0!important;right:0!important;background:transparent!important}</style><div id="MathJax_Message" style="display: none;"></div>
        
            
            
<link rel="stylesheet" href="./PrintArrayinRevers_files/notification_toast.4e64826e52ec.css">
<div class="notification-toast-container notification-top-center regular">
    <div class="notification-errors">
        <p id="notification-auth-error" class="error-item hidden no-margin">
            <span class="fa fa-times less-margin-right"></span>Ensure that you are logged in and have the required permissions to access the test.
        </p>
        <p id="notification-server-error" class="error-item hidden no-margin">
            <span class="fa fa-times less-margin-right"></span>A server error has occurred. Please refresh the page or try after some time.
        </p>
        <p id="notification-error" class="error-item hidden no-margin">
            <span class="fa fa-times less-margin-right"></span>An error has occurred. Please refresh the page or try after some time.
        </p>
        <p id="notification-custom-error" class="error-item hidden no-margin"></p>
        
    </div>
</div>
<script type="text/javascript" src="./PrintArrayinRevers_files/notification-toast.a969d3e3af67.js.download" crossorigin="anonymous" defer=""></script>

        
        
        
        <!-- Google Tag Manager (noscript) -->
        <noscript>
            <iframe src="https://www.googletagmanager.com/ns.html?id=GTM-PBHB3B9"
            height="0" width="0" style="display:none;visibility:hidden"></iframe>
        </noscript>
        <!-- End Google Tag Manager (noscript) -->
        
        

        <!-- Placeholder for any alert message on the site -->
        
        <div id="alert-message-holder">
            

            <!-- put a dummy message box so that it can be used when cloning
                 and adding more -->
            
        <div class="alert-message hidden">
                <div class="message float-left"></div>
                <div class="cross-holder float-left"><span class="small-cross sprites"></span></div>
                <div class="clear"></div>
            </div></div> <!-- end alert-message-holder -->

        <!-- Placeholder for any error message on the site -->
        
        <div id="error-message-holder">
            

            <!-- put a dummy message box so that it can be used when cloning
                 and adding more -->
            <div class="error-message hidden">
                <div class="message float-left"></div>
                <div class="cross-holder float-left"><span class="small-cross sprites"></span></div>
                <div class="clear"></div>
            </div>
        </div> <!-- end error-message-holder -->
        
        

        
    
    
        
        <header class="header new-layout-header">
            <i class="fa fa-bars mobile-menu-btn"></i>
            <nav class="navigation">
                
                <a href="https://www.hackerearth.com/" class="logo logo-h-terminal  no-underline float-left track-header-logo"></a>
                

                
                <ul class="nav-bar no-padding float-left tablet-hide">
                    <!-- practice page -->
                    <li id="problems" class="nav-bar-menu selected"><a class="track-header-problems" href="https://www.hackerearth.com/practice/">PRACTICE</a></li>
                    <!-- challenges page -->
                    <li id="challenges" class="nav-bar-menu "><a class="track-header-challenges" href="https://www.hackerearth.com/challenges/">COMPETE</a></li>
                    <!--Leaderboard page-->
                    <li id="leaderboard" class="nav-bar-menu "><a class="track-header-leaderboard" href="https://www.hackerearth.com/leaderboard/contests/rated/">LEADERBOARD
                    </a></li>
                </ul>
                <ul class="nav-bar right-nav-bar no-padding float-right tablet-hide">
                    
                    
                    <li id="searchbar">
                        <div id="search-icon-container" class="float-left">
                            <i class="fa fa-search"></i>
                        </div>
                        <input id="searchbar-input" class="float-left" type="text" value="" name="q" autocomplete="off" spellcheck="false" placeholder="Search developers, problems, etc" ajax1="/search/AJAX/search/" ajax2="/search/search-results/">
                        <div id="search-dropdown" style="display: none;"></div>
                    </li>
                    
                    

                    
                    <li id="header-notif-icon" class="">
<a class="track-header-notifs tool-tip notification-icon tablet-hide" title="Notifications">
    <span id="notif-icon" expand="notifications-box" class="nav-bar-menu nav-menu pagelet-hover" ajax="/notifications/pagelets/new-notifications/" target="notifications-container">
        <i class="fa fa-bell"></i>
        
    </span>
</a>
<a class="track-header-notifs tool-tip notification-icon tablet-show" title="Notifications" href="https://www.hackerearth.com/notifications/">
    <span id="notif-icon-mob" class="nav-bar-menu">Notifications
</span></a>

</li>
                    

                    
                        
                        <li id="user-name" class="nav-bar-menu tablet-hide"><a class="track-header-profile-box" href="https://www.hackerearth.com/@kanthipriya"><img src="./PrintArrayinRevers_files/30048820" alt="kanthipriya" width="30" height="30" onerror="if(typeof handle_avatar_error==&#39;function&#39;){handle_avatar_error(this);}"></a></li>
                        
                    

                    
                    <li id="hacker-dd-icon" expand="hacker-box" class="nav-bar-menu nav-menu"><a><div class="caret-icon"><i class="fa fa-caret-down"></i></div></a></li>
                    

                    

                    <div class="clear"></div>
                </ul> <!-- nav-bar -->
                <div class="clear"></div>
                
            </nav> <!-- navigation -->

            <i class="fa fa-filter challenge-filter-btn hidden"></i>

        </header> <!-- header -->
        
    
     <style>
  #gdpr-modal {
    position: absolute;
    bottom: 0;
  }
</style>
<div id="gdpr-modal" class="modal-window smaller-modal hidden">
  

<style>
  #gdpr-modal-content {
    font-family: 'Open Sans', sans-serif;
  }

  #gdpr-modal-content .modal-header {
    padding: 50px 55px 35px 55px;
    font-size: 24px;
    font-weight: 400;
  }

  #gdpr-modal-content .modal-footer {
    padding: 25px 55px 90px;
  }

  #gdpr-modal-content .modal-content {
    padding: 0 55px 5px;
    font-size: 16px;
    line-height: 22px;
  }

  #gdpr-modal-content .modal-footer .checkbox-row {
    font-size: 16px;
    display: inline-flex;
  }

  #gdpr-modal-content a {
    color: #0099ff;
  }
  
  #gdpr-modal-content .button.disabled {
    background: #f5f6f6 !important;
  }
</style>

<div id="gdpr-modal-content">
  
<div class="modal-header">HackerEarth’s Privacy Policy and Terms of Service</div>
  <div class="modal-content">
      We care about your data privacy. HackerEarth uses the information that you provide to contact you about relevant content, products, and services. <br> <br>

      Our <a href="https://www.hackerearth.com/privacy/" target="_blank">Privacy Policy</a> and <a href="https://www.hackerearth.com/terms-of-service/" target="_blank">Terms of Service</a> will help you understand that you are in control of your data at HackerEarth.
  </div>
  <div class="modal-footer">
    <div class="margin-bottom-15 regular checkbox-row">
      <input type="checkbox" name="gdpr-tnc">
      I have read and I agree.
    </div>
    <div class="">
      <input type="submit" name="submit" value="Proceed" class="button btn-blue fontawesome btn-largest disabled large" id="gdpr-submit">
    </div>
  </div>
</div>

</div>


    

    
    
    

    

    <div id="comment-share-modal" class="modal-window small-modal">
        <div class="modal-header">
            Comment permalink
        </div>
        <div class="modal-content">
            <div class="comment-share-wrapper align-center">
                <textarea class="comment-share-text" type="textbox" rows="4" readonly="readonly" onclick="this.select();"></textarea>
            </div>
        </div>
    </div>

    
    

    <!-- This is the center page which has a fixed width of 1100px -->
    
<script type="text/javascript" async="" src="./PrintArrayinRevers_files/MathJax.js.download"></script>


<script type="text/x-mathjax-config;executed=true">
    var options = {
      messageStyle: "none",
      jax: ["input/TeX", "output/SVG", "output/HTML-CSS"],
      tex2jax: {
        inlineMath: [['$$','$$'], ['\\(', '\\)']],
        displayMath: [['$$$', '$$$'], ['\\[', '\\]']],
        preview: "none"
      },
      SVG: {
        useGlobalCache: false
      }
    };

    // modify the options only in case of assessments, since for proxima-nova mathjax renders very small
    // text in chrome
    if (window.isProximaNova) {
      options = {
        messageStyle: "none",
        jax: ["input/TeX", "output/SVG", "output/HTML-CSS"],
        tex2jax: {
          inlineMath: [['$$','$$'], ['\\(', '\\)']],
          displayMath: [['$$$', '$$$'], ['\\[', '\\]']],
          preview: "none"
        },
        SVG: {
          useGlobalCache: false,
          scale: MathJax.Hub.Browser.isChrome ? 175 : 100,
          minScaleAdjust: 100
        },
        "HTML-CSS": {
          minScaleAdjust: 100
        },
        "CommonHTML": {
          minScaleAdjust: 100
        }
      }
    }

    MathJax.Hub.Config(options);
</script>
<script type="text/javascript" src="./PrintArrayinRevers_files/mathjax.3489d4a1e549.js.download" crossorigin="anonymous"></script>
<script type="text/javascript">
    window.addEventListener("load", function() {
        MathJax.Hub.Queue(["Typeset", MathJax.Hub]);
    });
</script>
<div class="layout-container">
    <div class="gray-wide-container">
        <div id="practice-problem-app-root" class="padding-bottom-20"><div class="practice-problem-container"><div class="problem-header"><div class="breadcrumb dark small no-margin"><a class="no-underline" href="https://www.hackerearth.com/practice">All Tracks</a><span class="icon">&gt;</span><a class="no-underline" href="https://www.hackerearth.com/practice/data-structures/">Data Structures</a><span class="icon">&gt;</span> <a class="no-underline" href="https://www.hackerearth.com/practice/data-structures/arrays/">Arrays</a><span class="icon">&gt;</span> <a class="no-underline" href="https://www.hackerearth.com/practice/data-structures/arrays/1-d/">1-D</a><span class="icon">&gt;</span> <span class="color-gray">Problem</span></div><div class="title-panel"><div class="title">Print Array in Reverse</div><span class="bookmark-icon" role="presentation"><div class="he-tooltip inline-block he-tooltip-bottom" aria-label="Bookmark"><i class="fa fa-bookmark-o"></i></div></span></div><div class="problem-meta"><div class="he-tooltip inline-block item he-tooltip-bottom" aria-label="Attempted by"><div class="icon ui-user-check"></div><div class="label">131606</div></div><div class="he-tooltip inline-block item he-tooltip-bottom" aria-label="Success Rate"><div class="icon ui-target"></div><div class="label">62%</div></div><div class="he-tooltip inline-block item he-tooltip-bottom" aria-label="Points"><div class="icon ui-task-s"></div><div class="label">10</div></div><div class="item"><div class="ratings-container"><div class="ratings"><div class="react-stars-wrapper-07412411068145452" style="display: flex;"><div aria-label="add rating by typing an integer from 0 to 5 or pressing arrow keys" class="star-icon react-stars" style="overflow: hidden; position: relative;"><style>
    .react-stars-07412411068145452:before {
      position: absolute;
      overflow: hidden;
      display: block;
      z-index: 1;
      top: 0; left: 0;
      width: 50%;
      content: attr(data-forhalf);
      color: #ffd700;
  }</style><span class="" data-index="0" data-forhalf="★" style="position: relative; overflow: hidden; cursor: default; display: block; float: left; color: rgb(255, 215, 0); font-size: 18px;">★</span><span class="" data-index="1" data-forhalf="★" style="position: relative; overflow: hidden; cursor: default; display: block; float: left; color: rgb(255, 215, 0); font-size: 18px;">★</span><span class="" data-index="2" data-forhalf="★" style="position: relative; overflow: hidden; cursor: default; display: block; float: left; color: rgb(255, 215, 0); font-size: 18px;">★</span><span class="" data-index="3" data-forhalf="★" style="position: relative; overflow: hidden; cursor: default; display: block; float: left; color: rgb(255, 215, 0); font-size: 18px;">★</span><span class="" data-index="4" data-forhalf="★" style="position: relative; overflow: hidden; cursor: default; display: block; float: left; color: gray; font-size: 18px;">★</span><p role="status" style="position: absolute; left: -200rem;">4.1</p></div></div></div><div class="votes">21 votes</div></div></div><div class="item"><div class="icon ui-tag"></div><div class="label">Very-Easy</div></div><div class="share-container"><div class="item share-item"><div class="icon ui-share"></div><div class="label">Share</div></div></div></div></div><div class="problem-tabs"><a href="https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/print-array-in-reverse/"><div class="tab" role="presentation">Details</div></a><a href="https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/print-array-in-reverse/submissions/"><div class="tab" role="presentation">Submissions</div></a><div class="tab active" role="presentation">Discussion</div><a href="https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/print-array-in-reverse/editorial/"><div class="tab" role="presentation">Editorial</div></a></div><div><div class="discussion-forum-practice"><div><div class="forum-container margin-top-10"><div><h2 class="discussion-forum-heading">DISCUSSIONS</h2></div><div class="title-bar"><div class="left"><span title="Total topics">3 topics</span><a class="filters-modal hidden">Filter/Sort&nbsp;<i class="fa fa-angle-right"></i></a></div><div class="right"><div class="filter-wrapper"><i class="fa fa-filter dd-icon" aria-hidden="true" title="Filter by"></i><span class="sr-only">Filter by:</span><select name="filterby" id="filterby" title="Filter" class="margin-left-8"><option value="all">All</option><option value="mine">Added by me</option><option value="liked">Liked by me</option></select></div><div class="sort-wrapper"><i class="fa fa-sort dd-icon" aria-hidden="true" title="Sort by"></i><span class="sr-only">Sort by:</span><select name="sortby" id="sortby" title="Sort" class="margin-left-8"><option value="recent-comments">Recent comments</option><option value="recently-posted">Recently posted</option><option value="most-likes">Most likes</option><option value="most-comments">Most comments</option></select></div><span class="search-wrapper margin-left-10"><input type="text" class="search" placeholder="Search topics" value=""><div class="fa fa-search search-icon"></div></span><a class="btn btn-blue btn-medium-nuskha margin-left-10 new-topic-btn" href="https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/print-array-in-reverse/discussion/new/"><i class="fa fa-plus" aria-hidden="true"></i> Add Topic</a></div></div><div><div class="topic-row"><div class="title-block"><a class="title-text" title="simple solution in python" href="https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/print-array-in-reverse/discussion/simple-solution-in-p-d2c0fdd7/">simple solution in python</a><div class="subtitle description-text" title="n=int(input())li=[int(input()) for i in range(n)]f=li[::-1]for i in f:print(i)">n=int(input())li=[int(input()) for i in range(n)]f=li[::-1]for i in f:print(i)</div><div class="subtitle">By <a href="https://www.hackerearth.com/@lalitamsharma04" target="_blank" title="Lalita sharma&#39;s profile">Lalita sharma</a>&nbsp;|&nbsp;<span><time datetime="2020-11-16T10:04:04.000Z" title="simple solution in python">6 months ago</time></span></div></div><a class="topic-row-btn" href="https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/print-array-in-reverse/discussion/simple-solution-in-p-d2c0fdd7/"><span class="fa fa-comment-o row-btn-icon"></span>1</a><a class="topic-row-btn vb" title="Like this topic"><span class="fa fa-thumbs-o-up row-btn-icon"></span>1</a></div><div class="topic-row"><div class="title-block"><a class="title-text" title="simple solution in c++" href="https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/print-array-in-reverse/discussion/simple-solution-in-c-b3e63356/">simple solution in c++</a><div class="subtitle description-text" title="#include&lt;bits/stdc++.h&gt;using namespace std;int main(){int n,l=0;cin&gt;&gt;n;vector&lt;int&gt; v;for(int i=0;i&lt;n;i++){cin&gt;&gt;l;v.push_back(l);}reverse(v.begin(),v.end());for(int i=0;i&lt;n;i++){cout&lt;&lt;v[i]&lt;&lt;endl;}} ">#include&lt;bits/stdc++.h&gt;using namespace std;int main(){int n,l=0;cin&gt;&gt;n;vector&lt;int&gt; v;for(int i=0;i&lt;n;i++){cin&gt;&gt;l;v.push_back(l);}reverse(v.begin(),v.end());for(int i=0;i&lt;n;i++){cout&lt;&lt;v[i]&lt;&lt;endl;}}&nbsp;</div><div class="subtitle">By <a href="https://www.hackerearth.com/@kashu3125agrawal" target="_blank" title="harsh agrawal&#39;s profile">harsh agrawal</a>&nbsp;|&nbsp;<span><time datetime="2020-10-09T14:15:29.000Z" title="simple solution in c++">7 months ago</time></span></div></div><a class="topic-row-btn" href="https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/print-array-in-reverse/discussion/simple-solution-in-c-b3e63356/"><span class="fa fa-comment-o row-btn-icon"></span>0</a><a class="topic-row-btn vb" title="Like this topic"><span class="fa fa-thumbs-o-up row-btn-icon"></span>0</a></div><div class="topic-row"><div class="title-block"><a class="title-text" title="easy way to solve is to check the size of index and then write the condition for reverse order and print in next line" href="https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/print-array-in-reverse/discussion/easy-way-to-solve-is-2abc551b/">easy way to solve is to check the size of index and then write the condition for reverse order and print in next line</a><div class="subtitle description-text" title="#define MAX_SIZE 100int main(){ int arr[MAX_SIZE]; int size,i; scanf(&quot;%d&quot;,&amp;size); for(i=0;i&lt;size;i++) { scanf(&quot;%d&quot;,&amp;arr[i]);  } for(i=size-1;i&gt;=0;i--) { printf(&quot;%d\n&quot;,arr[i]); } printf(&quot;\n&quot;); return 0; }">#define MAX_SIZE 100int main(){&nbsp;int arr[MAX_SIZE];&nbsp;int size,i;&nbsp;scanf("%d",&amp;size);&nbsp;for(i=0;i&lt;size;i++)&nbsp;{&nbsp;scanf("%d",&amp;arr[i]);&nbsp;&nbsp;}&nbsp;for(i=size-1;i&gt;=0;i--)&nbsp;{&nbsp;printf("%d\n",arr[i]);&nbsp;}&nbsp;printf("\n");&nbsp;return 0;&nbsp;}</div><div class="subtitle">By <a href="https://www.hackerearth.com/@rishabhsingh9088" target="_blank" title="Rishu Singh&#39;s profile">Rishu Singh</a>&nbsp;|&nbsp;<span><time datetime="2020-06-22T12:06:32.000Z" title="easy way to solve is to check the size of index and then write the condition for reverse order and print in next line">11 months ago</time></span></div></div><a class="topic-row-btn" href="https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/print-array-in-reverse/discussion/easy-way-to-solve-is-2abc551b/"><span class="fa fa-comment-o row-btn-icon"></span>0</a><a class="topic-row-btn vb" title="Like this topic"><span class="fa fa-thumbs-o-up row-btn-icon"></span>0</a></div></div></div></div></div></div></div></div>
    </div>
</div>








<script type="text/javascript">
    var CodeEditorText = {
        fullScreen: "Full Screen",
        minimise: "Minimise",
        submit : "SUBMIT",
        compileSubmit : "Compile & Test",
        compileSubmitForSQL : "Execute & Test",
        provideCustomInput : "Provide custom input",
        keybindingNormal : "Normal",
        keybindingVim : "Vim",
        keybindingEmacs : "Emacs",
        intellisense: "Intellisense",
        writeOrUploadCode : "Enter your code or <a> <i className='fa fa-upload'></i> Upload your code</a> as file.",
        overWriteExistingTemplate : "Your existing template will be over-written. Are you sure you want to update?",
        updateDefaultTemplate : "Update default template",
        takeMeBack: "Nope take me back",
        yes: "Yes",
        selectLanguage: "Language",
        save : "Save",
        loading: "Loading",
        autoCompleteInfo: "Press Ctrl-space for autocomplete suggestions.",
        autoCompleteServerInfo: "Press Ctrl-space for autocomplete suggestions (accuracy dependent on connection stability).",
        goFullScreen: "Go full screen",
        exitFullScreen: "Exit full screen",
        goFullScreenTooltip: "Fullscreen mode for split view",
        lightTheme: "Light",
        darkTheme: "Dark",
        unsavedCodeWarning: "You may loose all the unsaved changes!",
        savedText: "Saved",
        errorInSavingText: "Error in saving",
        saveText: "Save",
        setFavoriteLangText: "Set {0} as favorite",
        setDefaultTemplateText: "Set as default template",
        selectLanguageText: "Select Language",
        themeHeader: "Theme",
        helpText: "Just one more thing to do",
        editorModeHeader: "Editor Mode",
        editorFontHeader: "Font",
        editorTabSpaceHeader: "Tab Space",
        editText: "Edit",
        submitText: "Submit",
        playText: "Play",
        defaultBot: "Default Bot",
        fetchFailure: "A server error has occurred. You can continue writing code or attempt any other question and try again after a while.",
        fetchTimedout: "We have received your submission and it is being evaluated.",
        multiEditModeIndicator: "Multiline editing is enabled. Press esc to turn it off.",
        favLangMsg: "has been set as your preferred language.",
        defaultCodeMsg: "code template has been updated.",
        visibility: "Visibility",
        notAvailableText: "-",
        visibleTestCase: "Visible test case",
        hiddenTestCase: "Hidden test case",
        submitResponseText: {
            header: {
                RESULT: "RESULT",
                EVALUATING_SOLUTION: "Evaluating solution...",
                SUBMISSION_ID : "Submission ID",
                REFER_JUDGE_ENVIRONMENT : "Refer judge environment",
                VIEW_MORE_TEXT : "View more"
            },
            table: {
                inputCol: {
                    DISPLAY_NAME: "Input",
                },
                outputCol: {
                    DISPLAY_NAME: "Output",
                },
                yourOutput: {
                    HEADING_TOOLTIP: "Your output for given input",
                },
                correctOutput: {
                    HEADING_TOOLTIP: "Correct output for given input",
                },
                log: {
                    HEADING_TOOLTIP: "Standard error stream for given input",
                    ERROR_TOOLTIP: "Error log for given testcase",
                },
                diff: {
                    HEADING_TOOLTIP: "Diff between your output and correct output",
                }
            },
            footer: {
                COMPILATION_LOG: "Compilation log",
            },
            common: {
                SCORE: "Score",
                TIME: "Time (sec)",
                MEMORY: "Memory (KiB)",
                LANGUAGE: "Language",
                INPUT: "Input",
                RESULT: "Result",
                YOUR_OUTPUT: "Your output",
                CORRECT_OUTPUT: "Correct output",
                LOG: "Log",
                DIFF: "Diff",
                AC_TITLE: "Solution accepted",
                PAC_TITLE: "Partially solved",
                SECONDS: "seconds",
                SEC_S: "sec(s)",
                KIB: "KiB",
            },
            resultMapping: {
                RE: "Runtime error",
                CE: "Compilation error",
                TLE: "Time limit exceeded",
                MLE: "Memory limit exceeded",
                WA: "Wrong answer",
                AC: "Accepted",
                PAC: "Partially accepted",
            },
            typeDescriptionMapping: {
                SIGSEGV: 
                    '<span class="bold">Segmentation fault:</span> This error has occurred because your program is trying to read or write outside the allocated memory or your program is trying to write a read-only memory. For example, this error is thrown when you are accessing a[-1] in a programming language that does not support negative indices for an array.<div>The SIGSEGV error can also occur when an out-of-scope array index causes a buffer overflow or an incorrectly-initialized pointer.</div>'
                ,
                SIGXFSZ: 
                    '<span class="bold">Output limit exceeded:</span> This error has occurred because your program is printing an excessive amount of data.'
                ,
                SIGFPE: 
                    '<span class="bold">Floating point error:</span> This error has occurred because you are dividing a number by 0 or trying to take the square root of a negative number.'
                ,
                SIGABRT: 
                    '<span class="bold">Signal abort error:</span> This error has occurred because the compiler aborted your program in while executing the same. It can also occur because of allocation of insufficient memory.'
                ,
                NZEC: 
                    '<span class="bold">Non-zero exit code:</span> This error has occurred because the program has exited after returning a different value from 0 to the shell.<div>In C or C++, the error represents (but not limited to) that you forgot to add <span class="bold">return 0</span> at the end of your program, your program throws an exception that has not been caught, or the program has allocated a large amount of memory in vector.</div><div>For languages such as Python, this error represents that your program has crashed or raised an uncaught exception.</div>'
                ,
                MLE: 
                    '<span class="bold">Memory limit exceeded:</span> This error has occurred because your program is trying to allocate some memory beyond the allowed limit. It can also occur if the program has a very large array or if a data structure in your program is too large.'
                ,
            }
        },
        backend: {
            CAN_SHOW_VISIBLE_TEST_CASES: false,
        },
    };

    var CodeEditorConstants= {
        CAN_SHOW_SCORE_FOR_SUBMISSION: false,
    }

</script>



<script type="text/javascript">
    // Following global variables are used to carry translated strings from HTML pages to 'bluebook' React templates
    var QUESTION_TEXT = "Question";
    var LOAD_QUESTION_TEXT = "Load Question";
    var FLOW_HELP_TEXT = "See how to attempt this question.";
    var MAX_MARKS_TEXT = "Max. score";
    var LOADING_ERR_MSG_TEXT = "Oops! There seems to be some issue. Please refresh the page.";
    var LOAD_CODE_EDITOR_TEXT = "Load Code Editor";
    var LOADING_TEXT = "Loading Code Editor...";
    var CODE_SUBMIT_HELP_TEXT = "You can submit code after loading editor";
    var NEW_SUBMISSION_TEXT = "New Submission";
    var ALL_SUBMISSIONS_TEXT = "All Submissions";
    var REFRESHING_TEXT = "Refreshing...";
    var REFRESH_ALL_SUBMISSIONS_TEXT = "Refresh All Submissions List";
    var EXPLAINATION_TEXT = "Explanation";
    var SAMPLE_INPUT_TEXT = "Sample Input";
    var SAMPLE_OUTPUT_TEXT = "Sample Output";
    var PLAINTEXT_LINK_TEXT = "Plaintext Link";
    var TIME_LIMIT_TEXT = "Time Limit";
    var MEMORY_LIMIT_TEXT = "Memory Limit";
    var SOURCE_LIMIT_TEXT = "Source Limit";
    var FILE_SIZE_LIMIT_TEXT = "File size limit is {fileSizeLimit} MB";
    var MARKING_SCHEME_TEXT = "Marking Scheme";
    var ALLOWED_LANGUAGES_TEXT = "Allowed Languages";
    var SUBMITTING_TEXT = "Submitting..";
    var ATTEMPTED_TEXT = "Attempted";
    var SUBMIT_TEXT = "Submit";
    var ALERT_TEXT_1 = "Please attach a file to your answer";
    var UPLOAD_FILE_TEXT = "Upload File";
    var UPLOAD_PREDICTION_FILE_TEXT = "Upload File";
    var UPLOAD_SOURCE_CODE_TEXT = "Upload Source Code";
    var UPLOAD_APK_TEXT = "Upload Android Application (.apk)";
    var ALERT_TEXT_2 = "Your time for this question is over. You cannot change your answer now.";
    var NOT_ATTEMPTED_TEXT = "Not Attempted";
    var ALERT_TEXT_3 = "Answer was reset successfully!";
    var ALERT_TEXT_4 = "You cannot reset the answer now!";
    var ALERT_TEXT_5 = "Your time for this question is over. You cannot reset your answer now.";
    var ALERT_TEXT_6 = "Your time for this question is over. You cannot change your answer now.";
    var RESET_ANSWER_TEXT = "Reset Answer";
    var ANSWER_SAVED_TEXT = "Answer Saved";
    var ANSWER_UNSAVED_TEXT = "Do not forget to submit your answer.";
    var NEXT_QUESTION_TEXT = "Next Question";
    var WRITE_ANSWER_TEXT = "Write your answer here";
    var WARNING_TEXT = "Select at least one option.";
    var CHANGE_FILE_TEXT = "Change File";
    var DISABLE_ERROR_MESSAGE = "Please upload APK file first!";
    var YOUR_ANSWER_TEXT = "Your Answer";
    var ADDITIONAL_COMMENTS = "Additional Comments";
    var YOUR_SOLUTION = "Your Solution";
    var PREVIEW_TEXT = "Preview";
    var WEBCAM_NOT_ACCESSIBLE_MESSAGE = "Could not access webcam. Enable webcam or use latest version of chrome/firefox browser.";
    var TIME_COMPLETED_MESSAGE = "The time has completed!";
    var LEAVE_CONFIRM_MESSAGE_1 = "Are you sure you want to leave?";
    var WEBCAM_ACCESS_INFO_1 = "This test requires webcam access. Give webcam permission.";
    var WEBCAM_ACCESS_INFO_2 = "You can not take test without giving access to webcam.";
    var TIME_UP_MESSAGE = "Time Up!";
    var TIME_OVER_MESSAGE_1 = "Your time for this question is over. You cannot change your answer now.";
    var PLEASE_WAIT_MESSAGE_1 = "Please wait, your answer is being submitted.";
    var ATTEMPTED_MESSAGE = "Attempted";
    var NOTE_TEXT = "Note";
    var NOT_ATTEMPTED_MESSAGE = "Not Attempted";
    var PROCTOR_ALERT_1 = "You are a superuser. I will let you cheat.";
    var PROCTOR_ALERT_2 = "You will be logged out if you leave this page!";
    var SAMPLE_IO_NOTE = "Your code should be able to convert the sample input into the sample output. However, this is not enough to pass the challenge, because the code will be run on multiple test cases. Therefore, your code must solve this problem statement.";
    var PREDICTION_ERROR_TEXT = "Please upload your prediction file";
    var FILE_SIZE_ERROR_TEXT = "Please upload a file with size less than {fileSizeLimit} MB";
    var SOURCE_CODE_ERROR_TEXT = "Please upload your source code file";
    var CodeEditorConstants= {
        CAN_SHOW_SCORE_FOR_SUBMISSION: false,
    }
</script>

<script type="text/javascript" charset="utf-8">
    var DOWNLOAD_DATASET_TEXT = "Download dataset";
    window.PRACTICE_PAGE = {
        CONSTANT: {
            USER_ID: '5837301',
            isAuthenticated: true,
            STATIC_URL: 'https://static-fastly.hackerearth.com/static/',
            RENDER_ISSUE_ALERT: "An error has occurred. Please refresh the page or try after sometime.", 
            DETAILS: "Details",
            SUBMISSIONS: "Submissions",
            DISCUSSIONS: "Discussion",
            SIMILAR_PROBLEMS: "Similar Problems",
            EDITORIAL: "Editorial",
            AUTHOR_SOLUTION: "Author's Solution",
            TESTER_SOLUTION: "Tester's Solution",
            ALL_TRACKS: "All Tracks",
            PROBLEM: "Problem",
            SHARE: "Share",
            PREDICTION_FILE_TITLE: "Upload prediction file",
            PREDICTION_FILE_DESC: "Please upload the prediction file in the format as stated in the problem.",
            ADD_FILES:  '<span class="highlight">Add files</span> or drop files here' ,
            UPLOADED_AND_SUBMIT: "Your file has been uploaded successfully and submit now.",
            SUBMIT_AND_EVALUATE: "Submit & Evaluate",
            SUCCESS_MESSAGE: "Your submission has been received. Check your submissions tab for more",
            ERROR_MESSAGE: "Something went wrong, try again.",
            SRC_FILE_TITLE: "Upload Source Files",
            SRC_FILE_DESC: "You need to submit a zip or tar archive consisting of a text file explaining your approach, details about feature engineering, tools you used and the relevant source files.",
            UPLOAD: "Upload",
            EXPLANATION: "Explanation",
            CONTRIBUTORS: "Contributers",
            VOTES: "votes",
            AVG_RATING: "Average Rating",
            YOU_RATED: "You Rated",
            RATE_HERE: "Rate Here",
            ATTEMPTED_BY: "Attempted by",
            SUCCESS_RATE: "Success Rate",
            POINTS: "Points",
            TAGS: "Tags",
            MY_SUBMISSION: "My Submissions",
            BEST_SUBMISSION: "Best Submissions",
            TD_RESULT: "Result",
            TD_RESULT_DETAILS: "Result Details",
            TD_TIME: "Time (Sec)",
            TD_MEMORY: "Memory (kb)",
            TD_LANG: "Language",
            TD_DETAIL: "Detail",
            TD_DATE: "Date",
            NO_SUBMISSION: "No code submissions done yet",
            SUBMISSION: "Submission",
            NO_BEST_SOLUTION: "There is no solution for this language",
            EDITORIAL_LOCK_INFO: "The Editorial is locked. In order to qualify for points, you need to solve the problem without unlocking the editorial.",
            EDITORIAL_LOCK_MSG: "Are you sure you want to unlock the tab?",
            EDITORIAL_UNLOCK_TEXT: "Unlock it"
        }
    }
</script>




<script type="text/javascript" charset="utf-8">
    window.DISCUSSION_FORUM = {
        CONFIG: JSON.parse("{\"parentUrl\": \"/practice/data-structures/arrays/1-d/practice-problems/algorithm/print-array-in-reverse/\", \"displayName\": \"kanthipriya\", \"avatarUrl\": \"https://he-s3.s3.amazonaws.com/media/avatars/kanthipriya/resized/120/30048820\", \"parentTitle\": \"Print Array in Reverse\", \"showBreadcrumb\": false, \"profileUrl\": \"/@kanthipriya\", \"canPin\": false, \"profileId\": 5837301, \"identifier\": \"MTgzOjUzNzY1\", \"showBackbutton\": true, \"isAuthenticated\": true}"),
        CONSTANT: {
           BACK_STR : "Back",
           EDIT_STR: "Edit",
           DELETE_STR: "Delete",
           EDIT_TITLE: "Edit this topic",
           DELETE_TITLE: "Delete this topic",
           CANCEL_STR: "Cancel",
           UPDATE_TOPIC: "Update topic",
           PUBLISH_TOPIC: "Publish topic",
           ADD_REPLY_STR: "Reply",
           LOGIN_TO_LIKE: "Login to like",
           LIKE_TOPIC: "Like this topic",
           UNLIKE_TOPIC: "Unlike this topic",
           LIKE_COMMENT: "Like this comment",
           UNLIKE_COMMENT: "Unlike this comment",
           DELETE_COMMENT: "Delete",
           DELETE_COMMENT_TITLE: "Delete this comment?",
           DELETE_COMMENT_MESSAGE: "All the replies within this comment will also get deleted",
           PIN: "Pin",
           UNPIN: "Unpin",
           PIN_STR: "Pin this topic to the discussion board",
           UNPIN_STR: "Unpin this topic from the discussion board",
           PINNED: "Pinned",
           TOPIC_UPDATE_ALERT: "The topic has been updated",
           TOPIC_DUPLICATE_ALERT: "The topic has been posted to the discussion forum",
           PINNED_ALERT: "Topic has been pinned",
           UNPINNED_ALERT: "Topic has been unpinned",
           PIN_ERROR: "There was some error while trying to pin topic",
           TOPIC_DELETE_ALERT: "Some error occured while trying to delete this topic. Please contact support if problem persists.",
           TOPIC_DELETE_SUCCESS: "The topic has been deleted",
           TOPIC_404: "Topic not found. The URL might be incorrect or the topic has been deleted",
           PAGE_REFRESH: "Some error occured while loading this page. Please try refreshing this page once",
           CREATE_NEW_TOPIC: "Create new Topic",
           THATS_ALL_FOLKS: "That's all folks!",
           UNACCEPTABLE_CONTENT: "This content is not acceptable.",
        }
    }
</script>


<link rel="stylesheet" href="./PrintArrayinRevers_files/practice.714d60ed0436.css">
<link rel="stylesheet" href="./PrintArrayinRevers_files/vendors.f1a8a791db04.css">

<script type="text/javascript" src="./PrintArrayinRevers_files/vendors.f1e94332052d.js.download" crossorigin="anonymous"></script>
<script type="text/javascript" id="">!function(b,e,f,g,a,c,d){b.fbq||(a=b.fbq=function(){a.callMethod?a.callMethod.apply(a,arguments):a.queue.push(arguments)},b._fbq||(b._fbq=a),a.push=a,a.loaded=!0,a.version="2.0",a.queue=[],c=e.createElement(f),c.async=!0,c.src=g,d=e.getElementsByTagName(f)[0],d.parentNode.insertBefore(c,d))}(window,document,"script","https://connect.facebook.net/en_US/fbevents.js");fbq("init","802574803157043");fbq("set","agent","tmgoogletagmanager","802574803157043");fbq("track","PageView");</script>
<noscript><img height="1" width="1" style="display:none" src="https://www.facebook.com/tr?id=802574803157043&amp;ev=PageView&amp;noscript=1"></noscript>

<script type="text/javascript" id="hs-script-loader" src="./PrintArrayinRevers_files/2586902.js(2).download"></script>
<script type="text/javascript" src="./PrintArrayinRevers_files/nuskha-vendors.6ca2e2ba643c.js.download" crossorigin="anonymous"></script>
<script type="text/javascript" src="./PrintArrayinRevers_files/practice.b76c0d6b5ac6.js.download" crossorigin="anonymous"></script>

<script type="text/javascript" src="./PrintArrayinRevers_files/util.350eec762462.js.download" crossorigin="anonymous"></script>
<script type="text/javascript" src="./PrintArrayinRevers_files/controller.b244860907a5.js.download" crossorigin="anonymous"></script>
<script type="text/javascript" src="./PrintArrayinRevers_files/code_player.1487cb2419f4.js.download" crossorigin="anonymous"></script>
<script type="text/javascript" src="./PrintArrayinRevers_files/loginmodal.57b6963e19ee.js.download" crossorigin="anonymous"></script>


<script>
    // firestore credentials
    var firebaseConfig = {
        apiKey:'AIzaSyD7oH2r4iyvysFx47-IVwrzdwIuw7Ici90',
        authDomain:'he-production.firebaseapp.com',
        databaseURL:'https://he-production.firebaseio.com',
        projectId:'he-production',
        storageBucket:'he-production.appspot.com',
        messagingSenderId:'100736274227',
        appId:'1:100736274227:web:fdd60d6929555af4d3b846'
    };
    window.firebaseConfig = firebaseConfig;
</script>

    <script type="text/javascript" src="./PrintArrayinRevers_files/firebase-app.a75f50850a09.js.download" crossorigin="anonymous"></script>
    <script type="text/javascript" src="./PrintArrayinRevers_files/firebase-firestore.ac7f12977426.js.download" crossorigin="anonymous"></script>
    <script type="text/javascript" src="./PrintArrayinRevers_files/firestore_realtime.551dabc1780c.js.download" crossorigin="anonymous"></script>






<script type="text/javascript">
    var worker_url = "https://static-fastly.hackerearth.com/static/monaco-worker/monaco-worker.64ccee05b193.js"
    window.MonacoEnvironment = {
      getWorkerUrl: () => "data:text/javascript;charset=utf-8,"+encodeURIComponent(`
                  importScripts('${worker_url}')`)
    }
</script>

<script type="text/javascript">
    var initial_state = {
        pType: "algorithm",
        slug: "print-array-in-reverse",
        title: "Print Array in Reverse",
        topicTree: {"track": {"url": "/practice/data-structures/", "title": "Data Structures"}, "topic": {"url": "/practice/data-structures/arrays/", "title": "Arrays"}, "sub_topic": {"url": "/practice/data-structures/arrays/1-d/", "title": "1-D"}},
        problemData: {"id": 53765, "title": "Print Array in Reverse", "description": "<p>Given the size and the elements of array A, print all the elements in reverse order.</p>\n<p>Input:  <br />\nFirst line of input contains, N - size of the array.   <br />\nFollowing N lines, each contains one integer, i{th} element of the array i.e. A[i].    </p>\n<p>Output:  <br />\nPrint all the elements of the array in reverse order,  each element in a new line.  </p>\n<p><strong>Constraints:</strong> </p>\n<ul>\n<li><span class=\"mathjax-latex\">\\(1 \\le N \\le 100\\)</span>   </li>\n<li><span class=\"mathjax-latex\">\\(0 \\le A[i] \\le 1000\\)</span></li>\n</ul>", "sample_explanation": null, "tags": "Very-Easy", "level": "V-E", "private_url_hash": "97bf0646b23344c8ac271ebb299fea22", "ratings": {"votes": 21, "score": 4.1}, "success_rate": 62, "points": 10, "attempted_by": 131606, "bookmarked": false, "time_limit": 1.0, "memory_limit": 256, "max_code_size": 1024, "editorial": {"state": "locked"}},
        activeTab: "discussion",
        baseURL: "/practice/data-structures/arrays/1-d/practice-problems/algorithm/print-array-in-reverse/",
        isSourceList: false,
        shareURL: "https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/print-array-in-reverse/discussion/"
    }
    
    function loadPracticePage() {
        if (window.renderPracticePage) {
            window.renderPracticePage("practice-problem-app-root", initial_state);
        } else {
            typeof addAlert !== "undefined" && addAlert(PRACTICE_PAGE.CONSTANT.RENDER_ISSUE_ALERT);
        }
    }

    try {
        window.loadPracticePage();
    } catch (e) {
        window.addEventListener("load", loadPracticePage);
    }
</script>

<script>
    // firestore credentials
    var firebaseConfig = {
        apiKey:'AIzaSyD7oH2r4iyvysFx47-IVwrzdwIuw7Ici90',
        authDomain:'he-production.firebaseapp.com',
        databaseURL:'https://he-production.firebaseio.com',
        projectId:'he-production',
        storageBucket:'he-production.appspot.com',
        messagingSenderId:'100736274227',
        appId:'1:100736274227:web:fdd60d6929555af4d3b846'
    };
    window.firebaseConfig = firebaseConfig;
</script>

    <script type="text/javascript" src="./PrintArrayinRevers_files/firebase-app.a75f50850a09.js.download" crossorigin="anonymous"></script>
    <script type="text/javascript" src="./PrintArrayinRevers_files/firebase-firestore.ac7f12977426.js.download" crossorigin="anonymous"></script>
    <script type="text/javascript" src="./PrintArrayinRevers_files/firestore_realtime.551dabc1780c.js.download" crossorigin="anonymous"></script>




    <!-- include modal window for login/signup -->
    

    <!-- override this block where we do not want the footer -->
    
    
        
                





<footer class="marketing-footer footer-large">
    <div class="primary-footer">
        <div class="standard-margin-bottom contact-wrapper">
            <div class="standard-margin-bottom">
                <img src="./PrintArrayinRevers_files/he-footer-logo.svg">
            </div>
            <ul class="no-style">
                <li>+1-650-461-4192</li>
                <li>
                    <a href="mailto:contact@hackerearth.com" target="_blank">
                        contact@hackerearth.com
                    </a>
                </li>
            </ul>
            <ul class="social-links-container no-style">
                <li>
                    <a href="https://www.facebook.com/HackerEarth/" target="_blank">
                        <img src="./PrintArrayinRevers_files/facebook-logo.svg">
                    </a>
                </li>
                <li>
                    <a href="https://twitter.com/HackerEarth?ref_src=twsrc%5Egoogle%7Ctwcamp%5Eserp%7Ctwgr%5Eauthor" target="_blank">
                        <img src="./PrintArrayinRevers_files/twitter-logo.svg">
                    </a>
                </li>
                <li>
                    <a href="https://www.linkedin.com/company/hackerearth/?originalSubdomain=in" target="_blank">
                        <img src="./PrintArrayinRevers_files/linkedin-logo.svg">
                    </a>
                </li>
                <li>
                    <a href="https://www.youtube.com/channel/UCYU6nvKyRYnE5kiG9JXkXpA" target="_blank">
                        <img src="./PrintArrayinRevers_files/youtube-logo.svg">
                    </a>
                </li>
            </ul>
        </div>
        <div class="standard-margin-bottom">
            <h3 class="footer-heading">Resources</h3>
            <ul class="no-style">
                <li>
                    <a href="https://www.hackerearth.com/blog/talent-assessment/" target="_blank">
                        Tech Recruitment Blog
                    </a>
                </li>
                <li>
                    <a href="https://www.hackerearth.com/recruit/resources/guides/" target="_blank">
                        Product Guides
                    </a>
                </li>
                <li>
                    <a href="https://www.hackerearth.com/recruit/how-to-hire/" target="_blank">
                        Developer hiring guide
                    </a>
                </li>
                <li>
                    <a href="http://engineering.hackerearth.com/" target="_blank">
                        Engineering Blog
                    </a>
                </li>
                <li>
                    <a href="https://www.hackerearth.com/blog/developers/" target="_blank">
                        Developers Blog
                    </a>
                </li>
                <li>
                    <a href="https://www.hackerearth.com/docs/wiki/developers/solution-guide/" target="_blank">
                        Developers Wiki
                    </a>
                </li>
                <li>
                    <a href="https://www.hackerearth.com/getstarted-competitive-programming/" target="_blank">
                        Competitive Programming
                    </a>
                </li>
                <li>
                    <a href="https://www.hackerearth.com/university/" target="_blank">
                        Start a Programming Club
                    </a>
                </li>
                <li>
                    <a href="https://www.hackerearth.com/practice/machine-learning/prerequisites-of-machine-learning/basic-probability-models-and-rules/tutorial/" target="_blank">
                        Practice Machine Learning
                    </a>
                </li>
            </ul>
        </div>
        <div class="standard-margin-bottom">
            <h3 class="footer-heading">Solutions</h3>
            <ul class="no-style">
                <li>
                    <a href="https://www.hackerearth.com/recruit/" target="_blank">
                        Assess Developers
                    </a>
                </li>
                <li>
                    <a href="https://www.hackerearth.com/recruit/facecode/" target="_blank">
                        Conduct Remote Interviews
                    </a>
                </li>
                <li>
                    <a href="https://www.hackerearth.com/recruit/hiring/university-hiring/" target="_blank">
                        Assess University Talent
                    </a>
                </li>
                <li>
                    <a href="https://www.hackerearth.com/community-hackathons/" target="_blank">
                        Organize Hackathons
                    </a>
                </li>
            </ul>
        </div>
        <div class="standard-margin-bottom">
            <h3 class="footer-heading">Company</h3>
            <ul class="no-style">
                <li>
                    <a href="https://www.hackerearth.com/team/" target="_blank">
                        About Us
                    </a>
                </li>
                <li>
                    <a href="https://www.hackerearth.com/press/" target="_blank">
                        Press
                    </a>
                </li>
                <li>
                    <a href="https://www.hackerearth.com/companies/hackerearth/jobs/" target="_blank">
                        Careers
                    </a>
                </li>
            </ul>
        </div>
        <div class="standard-margin-bottom">
            <h3 class="footer-heading">Service &amp; Support</h3>
            <ul class="no-style">
                <li>
                    <a href="https://support.hackerearth.com/hc/en-us" target="_blank">
                        Technical Support
                    </a>
                </li>
                <li>
                    <a href="https://www.hackerearth.com/reach-us/" target="_blank">
                        Contact Us
                    </a>
                </li>
            </ul>
        </div>
    </div>
    <ul class="secondary-footer no-style">
        <li>
            
            
                © 2021 HackerEarth All rights reserved
            
        </li>
        <li>
            <a href="https://www.hackerearth.com/terms-of-service/" target="_blank">
                Terms of Service
            </a>
        </li>
        <li>
            <a href="https://www.hackerearth.com/privacy/" target="_blank">
                Privacy Policy
            </a>
        </li>
    </ul>
</footer>
        
    
    

    <div class="expand-box" id="recruiter-box" style="display: none;">
        <div class="down-arrow"></div>
        <ul class="no-margin">
            
            
            
            <a href="https://www.hackerearth.com/logout/?next=/practice/data-structures/arrays/1-d/practice-problems/algorithm/print-array-in-reverse/discussion/"><li>Logout</li></a>
        </ul>
    </div>

    
    <div class="expand-box" id="hacker-box" style="display: none;">
        <div class="down-arrow"></div>
        <ul class="no-margin">
            
            <a class="track-header-profile-box-profile" href="https://www.hackerearth.com/@kanthipriya">
                <li>
                    Profile (5%)
                    <div class="profile-complete-bar-head">
                        <span class="profile-complete-bar"></span>
                        <span class="profile-complete-bar-done" style="width: 5%; background-color: rgb(221, 75, 57);"></span>
                    </div>
                </li>
            </a>

            

            <a class="track-header-profile-box-activity" href="https://www.hackerearth.com/@kanthipriya/activity/hackerearth/"><li>Activity</li></a>
            <a class="track-header-profile-box-bookmark" href="https://www.hackerearth.com/bookmark/problems/"><li>Bookmarks</li></a>
            <a class="track-header-profile-box-settings" href="https://www.hackerearth.com/users/profile-settings/"><li>Settings</li></a>
            <a class="track-header-profile-box-invite tablet-hide" href="https://www.hackerearth.com/invite/"><li>Invite Friends</li></a>
            <hr class="hr">

            
            <a class="track-header-profile-box-user-ratings tablet-hide" href="https://www.hackerearth.com/leaderboard/contests/rated/"><li>Ratings</li></a>
            
            <a class="track-header-profile-box-docs" href="https://www.hackerearth.com/docs/wiki/developers/"><li>Documentation</li></a>

            <hr class="hr">

            

            

            
            

            
            <a class="track-header-profile-box-logout" href="https://www.hackerearth.com/logout/?next=/practice/data-structures/arrays/1-d/practice-problems/algorithm/print-array-in-reverse/discussion/"><li>Logout</li></a>
        </ul>
    </div> <!-- hacker-box -->
    

    <!-- Include notifications box -->
    



<div class="expand-box" id="notifications-box" style="display: none;">
    <div class="down-arrow"></div>
    <div class="notifications-title-container">
        <div class="float-left weight-600">Notifications</div>
        <div class="float-right">
            <a href="https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/print-array-in-reverse/discussion/#" ajax="https://www.hackerearth.com/notifications/AJAX/mark-all-read/" class="notif-mark-all-read link smaller clicky-ajax">Mark All as Read</a>
        </div>
        <div class="clear"></div>
    </div> <!-- notifications-title-container -->

    <div class="notifications-container nice-scrollbar" id="notifications-container" tabindex="0" style="overflow: hidden; outline: none;">
    </div> <!-- notifications-container -->

    <div class="smaller caps weight-600 align-center less-margin-2 less-margin-2-bottom">
        <a class="link" href="https://www.hackerearth.com/notifications/">View All Notifications</a>
    </div>
<div id="ascrail2000" class="nicescroll-rails nicescroll-rails-vr" style="width: 7px; z-index: 10; background: rgb(238, 238, 238); cursor: default; position: absolute; top: 1px; left: -7px; height: 0px; opacity: 1; display: none;"><div class="nicescroll-cursors" style="position: relative; top: 0px; float: right; width: 7px; height: 0px; background-color: rgb(204, 204, 204); border: none; background-clip: padding-box; border-radius: 0px;"></div></div><div id="ascrail2000-hr" class="nicescroll-rails nicescroll-rails-hr" style="height: 7px; z-index: 10; background: rgb(238, 238, 238); top: -6px; left: 0px; position: absolute; opacity: 1; cursor: default; display: none;"><div class="nicescroll-cursors" style="position: absolute; top: 0px; height: 7px; width: 0px; background-color: rgb(204, 204, 204); border: none; background-clip: padding-box; border-radius: 0px;"></div></div></div> <!-- notifications-box -->


    <!-- Load notification icon with unread count -->
    <div id="header-notif-icon-trigger" class="load-pagelet hidden" target="header-notif-icon" ajax="/notifications/pagelets/header-notif-icon-count/" show-loader="false"></div>

    

    

    
    

        
        

        <!-- Store any json returned for bigpipe -->
        <div id="bigpipe-json" class="hidden">
            
        </div>

        <!-- Store any html returned for feedback popup -->
        <div id="user-feedback-popup" class="hidden"></div>

        
            <div id="common-notification">
            </div>
        

        <!-- ping url for user presence -->
        <div id="ghost-ping-url" class="hidden" ajax="/ghost/ping/"></div>

        
        

        
        <div id="external-link-modal" class="modal-window very-large-modal">
            <div class="modal-content large dark align-left">
                <div id="external-link-content-wrapper">
                    <pre></pre>
                </div>
            </div>
        </div>
        

        <!-- All the scripts go here -->
        <script>
            
            var CURRENT_PATH = "https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/print-array-in-reverse/discussion/";
            var HISTORY = '';
            var DEFAULT_REAL_NUMBER_PRECISION = 2;
            var DECIMAL_PRECISION_ERROR_TEXT = "Only {decimal_limit} decimal places allowed";
            var SOMETHING_WENT_WRONG_ERROR_TEXT = "Something went wrong. Please try again later.";

            // Make code constants available globally in JS
            var MAP_LANG_TO_NAME = {"SCALA_2118": "Scala 2.11.8", "LUA": "Lua", "PASCAL": "Pascal", "CSHARP": "C#", "CPP": "C++", "PYTHON3": "Python 3", "POSTGRESQL": "PostgreSQL", "KOTLIN": "Kotlin", "SCALA": "Scala", "PERL": "Perl", "HASKELL": "Haskell", "D": "D", "PYTHON3_8": "Python 3.8", "CPP14": "C++14", "CPP17": "C++17", "R": "R(RScript)", "CPP11": "C++11", "GO": "Go", "RUBY": "Ruby", "BASH": "Bash", "GROOVY": "Groovy", "LOLCODE": "LOLCODE", "LISP": "Lisp", "Text": "Text", "WHENEVER": "Whenever", "MYSQL": "MySQL", "OBJECTIVEC": "Objective-C", "PHP": "PHP", "JAVASCRIPT_UI": "JavaScript", "PYTHON": "Python", "JAVASCRIPT": "JavaScript(Rhino)", "SWIFT_4_1": "Swift-4.1", "vp": "N/A", "TEXTFILE": "Text", "JAVA8": "Java 8", "JAVASCRIPT_NODE": "JavaScript(Node.js)", "RACKET": "Racket", "HTML": "HTML", "SWIFT": "Swift", "RUST": "Rust", "FSHARP": "F#", "JAVA14": "Java 14", "C": "C", "TYPESCRIPT": "TypeScript", "ORACLE_DB": "Oracle_Db", "OCAML": "OCaml", "OCTAVE": "Octave", "CLOJURE": "Clojure", "BEFUNGE": "Befunge", "CSS": "CSS", "ERLANG": "Erlang", "JAVA": "Java", "LISP_SBCL": "Lisp (SBCL)", "JULIA": "Julia", "VB": "Visual Basic", "MSSQL": "MSSQL"};
            var MAP_NAME_TO_LANG = {"Java 14": "JAVA14", "Lisp (SBCL)": "LISP_SBCL", "TypeScript": "TYPESCRIPT", "Java": "JAVA", "Scala": "SCALA", "JavaScript": "JAVASCRIPT_UI", "Perl": "PERL", "Lua": "LUA", "JavaScript(Rhino)": "JAVASCRIPT", "MySQL": "MYSQL", "Erlang": "ERLANG", "LOLCODE": "LOLCODE", "HTML": "HTML", "JavaScript(Node.js)": "JAVASCRIPT_NODE", "C#": "CSHARP", "Lisp": "LISP", "C++14": "CPP14", "Rust": "RUST", "Octave": "OCTAVE", "Ruby": "RUBY", "Bash": "BASH", "Groovy": "GROOVY", "C": "C", "Python 3": "PYTHON3", "R(RScript)": "R", "Kotlin": "KOTLIN", "Oracle_Db": "ORACLE_DB", "F#": "FSHARP", "N/A": "vp", "C++": "CPP", "Racket": "RACKET", "Objective-C": "OBJECTIVEC", "Swift": "SWIFT", "CSS": "CSS", "D": "D", "Clojure": "CLOJURE", "Befunge": "BEFUNGE", "Java 8": "JAVA8", "Whenever": "WHENEVER", "PostgreSQL": "POSTGRESQL", "Python 3.8": "PYTHON3_8", "Swift-4.1": "SWIFT_4_1", "OCaml": "OCAML", "Julia": "JULIA", "C++17": "CPP17", "Python": "PYTHON", "Pascal": "PASCAL", "Haskell": "HASKELL", "Scala 2.11.8": "SCALA_2118", "C++11": "CPP11", "Text": "TEXTFILE", "Go": "GO", "Visual Basic": "VB", "PHP": "PHP", "MSSQL": "MSSQL"};
        </script>

        

        <!-- alljs: static_media/js/jquery-1.7.min.patched.js static_media/js/jquery.color.js static_media/js/jquery.elastic.js static_media/js/ajaxSend.js  static_media/js/jquery.inview.js  static_media/js/tooltip/jquery.tipTip.modified.js  static_media/offline/offline.min.js  static_media/js/watermark.min.js  static_media/history.js?v=0.1/scripts/bundled/html4html5/jquery.history.js  static_media/js/jquery.nicescroll.js  static_media/simplemodal/simplemodal.js static_media/js/jquery.sticky.js static_media/js/pusher.min.js static_media/js/ifvisible.min.js static_media/ghost/ghost.js static_media/feeds/feeds.js static_media/base/progress_bar.js -->
        


<script>
    UPLOADING_TEXT = "Uploading";
    UPLOADED_TEXT = "Uploaded";
    SAVING_TEXT = "Saving..";
    UPLOAD_SUCCESS_MESSAGE = "File saved successfully.";
    UPLOAD_ERROR_MESSAGE = "An error occured while saving, please try again in sometime.";
</script>
<script type="text/javascript" src="./PrintArrayinRevers_files/alljs.86329a9e20af.js.download" crossorigin="anonymous"></script>
        <script type="text/javascript" src="./PrintArrayinRevers_files/base1.0.1.a4e6c5222884.js.download" crossorigin="anonymous"></script>
        <script type="text/javascript" src="./PrintArrayinRevers_files/bigpipe.1df36f9848f5.js.download" crossorigin="anonymous"></script>
        


<script type="text/javascript">
var CONFIRM_COMMENT_DELETE = "Are you sure, you want to delete comment?";
var COMMENT_NOT_DELETED = "Comment could not be deleted!";
var CONFORM_COMMENT_MARK_SPAM = "Are you sure, you want to mark this comment as spam?";
var COMMENT_NOT_MARKED_SPAM = "Comment could not be marked as spam!";
var ENTER_15_CHARS = "Enter at least 15 characters";
var JUST_X_MORE = "Just {count} more to go";
</script>
        <script>
            var MAP_MARKER_SIGNUP_IMAGE = 'https://static-fastly.hackerearth.com/static/metrics/map-marker.png';
            var MAP_MARKER_LOGIN_IMAGE = 'https://static-fastly.hackerearth.com/static/metrics/map-marker-login.png';
            var AJAX_URL = '';
        </script>
        
<script>
    // firestore credentials
    var firebaseConfig = {
        apiKey:'AIzaSyD7oH2r4iyvysFx47-IVwrzdwIuw7Ici90',
        authDomain:'he-production.firebaseapp.com',
        databaseURL:'https://he-production.firebaseio.com',
        projectId:'he-production',
        storageBucket:'he-production.appspot.com',
        messagingSenderId:'100736274227',
        appId:'1:100736274227:web:fdd60d6929555af4d3b846'
    };
    window.firebaseConfig = firebaseConfig;
</script>

    <script type="text/javascript" src="./PrintArrayinRevers_files/firebase-app.a75f50850a09.js.download" crossorigin="anonymous"></script>
    <script type="text/javascript" src="./PrintArrayinRevers_files/firebase-firestore.ac7f12977426.js.download" crossorigin="anonymous"></script>
    <script type="text/javascript" src="./PrintArrayinRevers_files/firestore_realtime.551dabc1780c.js.download" crossorigin="anonymous"></script>


        <script type="text/javascript" src="./PrintArrayinRevers_files/history.9f9bce34e5c7.js.download" crossorigin="anonymous"></script>
        <script type="text/javascript" src="./PrintArrayinRevers_files/commentUtils.dadb11872038.js.download" crossorigin="anonymous"></script>


        
        <script type="text/javascript" src="./PrintArrayinRevers_files/offline.min.7ce195ae7071.js.download" crossorigin="anonymous"></script>

        <script type="text/javascript" async="" src="./PrintArrayinRevers_files/MathJax.js.download"></script>


<script type="text/x-mathjax-config">
    var options = {
      messageStyle: "none",
      jax: ["input/TeX", "output/SVG", "output/HTML-CSS"],
      tex2jax: {
        inlineMath: [['$$','$$'], ['\\(', '\\)']],
        displayMath: [['$$$', '$$$'], ['\\[', '\\]']],
        preview: "none"
      },
      SVG: {
        useGlobalCache: false
      }
    };

    // modify the options only in case of assessments, since for proxima-nova mathjax renders very small
    // text in chrome
    if (window.isProximaNova) {
      options = {
        messageStyle: "none",
        jax: ["input/TeX", "output/SVG", "output/HTML-CSS"],
        tex2jax: {
          inlineMath: [['$$','$$'], ['\\(', '\\)']],
          displayMath: [['$$$', '$$$'], ['\\[', '\\]']],
          preview: "none"
        },
        SVG: {
          useGlobalCache: false,
          scale: MathJax.Hub.Browser.isChrome ? 175 : 100,
          minScaleAdjust: 100
        },
        "HTML-CSS": {
          minScaleAdjust: 100
        },
        "CommonHTML": {
          minScaleAdjust: 100
        }
      }
    }

    MathJax.Hub.Config(options);
</script>
<script type="text/javascript" src="./PrintArrayinRevers_files/mathjax.3489d4a1e549.js.download" crossorigin="anonymous"></script>
<script type="text/javascript">
    window.addEventListener("load", function() {
        MathJax.Hub.Queue(["Typeset", MathJax.Hub]);
    });
</script>

        <script>
            Offline.options = {
                interceptRequests: false,
                requests: false,
            };
        </script>

        

        

<script>
    var profile_completeness_percentage = 5;
</script>


<script>

$(document).ready(function (){
    $('#header-notif-icon-trigger').click();

    

    
    

    

    // show kone ge widget if not visited
    

});
</script>

<script type="text/javascript">
$(document).ready(function() {
    
    var m_links = {};
    var m_elements = {
        '#modal-login-form input[type=submit]': 'Modal Email Login',
        '#modal-signup-form input[type=submit]': 'Modal Email Signup',
        '.modal-social-login .btn-facebook': 'Modal Facebook Login',
        '.modal-social-login .btn-google': 'Modal Google Login',
        '.modal-social-signup .btn-facebook': 'Modal Facebook Signup',
        '.modal-social-signup .btn-google': 'Modal Google Signup',
        '.top-banner .login-banner a': 'Signup after banner click',
    };
    
    for (var key in m_elements) {
        $(key).live('click', {'key': key }, function(e) {
            var key = e.data.key;
            mixpanel.track('Click', {'name': m_elements[key]});
        });
    }
    for (var key in m_links) {
        mixpanel.track_links(key, 'Click', {'name': m_links[key]});
    }
});
</script>




<script type="text/javascript" src="./PrintArrayinRevers_files/search.1.0.7d336476c653.js.download" crossorigin="anonymous" defer=""></script>

<script type="text/javascript" src="./PrintArrayinRevers_files/gdpr-modal.e3306212a68a.js.download" crossorigin="anonymous"></script>



        <script>
            // Used in search
            var is_user_logged_in = true;
        </script>

        
        <script type="text/javascript" src="./PrintArrayinRevers_files/detect_timezone.12f6ba68823f.js.download" crossorigin="anonymous"></script>
        <script>

            function setTimezoneCookie(detected_user_tz) {
                /* Sets the detected user timezone as a cookie in the browser.
                   If someone changes it or removes it, a sanity check is
                   performed and the cookie is reset.

                   This cookie is set for ready availability of user timezone
                   in the backend.
                */

                const USER_TIMEZONE_COOKIE = 'user_tz';
                // Try to get the existing user timezone cookie stored
                // in the browser.
                user_tz = readCookie(USER_TIMEZONE_COOKIE);

                // Flag to determine whether a new cookie has to be created.
                create_cookie = false;

                if(user_tz) {
                    if(user_tz !== detected_user_tz) {
                        // If someone has changed the cookie in some way, we
                        // set a new cookie.
                        eraseCookie(USER_TIMEZONE_COOKIE);
                        create_cookie = true;
                    }
                } else {
                    create_cookie = true;
                }

                // Create a new cookie if create_cookie flag is set.
                createCookie(USER_TIMEZONE_COOKIE, detected_user_tz, 1);

            }
            $(document).ready(function(){
                var timezone = jstz.determine_timezone(); // Now you have an instance of the TimeZone object.
                // Set as a cookie in browser for easy access in backend.
                setTimezoneCookie(timezone.name());

                // Set as a js variable for easy access across frontend.
                USER_TIMEZONE = timezone.name()

                

                

                
                
                
                
                

                
                    var profile_timezone = "Asia/Kolkata";
                    if (timezone.name() !== profile_timezone) {
                        $.ajax({
                            type: "POST",
                            url:"/users/AJAX/set-timezone/",
                            data: {
                            'timezone': timezone.name(),
                            },
                        });
                    }
                

                
            });
        </script>
        
        
            

            
            
        

        <script type="text/javascript">
            
            $(document).ready(function(){
                //mixpanel delegate links custom method
                mixpanel.delegate_links = function (parent, selector, event_name, properties) {
                    properties = properties || {};
                    parent = parent || document.body;
                    parent = $(parent);
                    parent.on('click', selector, function (event) {
                        var new_tab = event.which === 2 || event.metaKey || event.target.target === '_blank' || this.target === '_blank';
                        properties.url = event.target.href || this.href;
                        function callback() {
                            if (new_tab) {
                                return;
                            }
                            window.location = properties.url;
                        }
                        if (!new_tab) {
                            event.preventDefault();
                            setTimeout(callback, 300);
                        }
                        mixpanel.track(event_name, properties, callback);
                    });
                };
            });
            
        </script>

         

        
        <!-- mixpanel analytics start -->
        <script type="text/javascript">(function(e,a){if(!a.__SV){var b=window;try{var c,l,i,j=b.location,g=j.hash;c=function(a,b){return(l=a.match(RegExp(b+"=([^&]*)")))?l[1]:null};g&&c(g,"state")&&(i=JSON.parse(decodeURIComponent(c(g,"state"))),"mpeditor"===i.action&&(b.sessionStorage.setItem("_mpcehash",g),history.replaceState(i.desiredHash||"",e.title,j.pathname+j.search)))}catch(m){}var k,h;window.mixpanel=a;a._i=[];a.init=function(b,c,f){function e(b,a){var c=a.split(".");2==c.length&&(b=b[c[0]],a=c[1]);b[a]=function(){b.push([a].concat(Array.prototype.slice.call(arguments,0)))}}var d=a;"undefined"!==typeof f?d=a[f]=[]:f="mixpanel";d.people=d.people||[];d.toString=function(b){var a="mixpanel";"mixpanel"!==f&&(a+="."+f);b||(a+=" (stub)");return a};d.people.toString=function(){return d.toString(1)+".people (stub)"};k="disable time_event track track_pageview track_links track_forms register register_once alias unregister identify name_tag set_config reset people.set people.set_once people.unset people.increment people.append people.union people.track_charge people.clear_charges people.delete_user".split(" ");for(h=0;h<k.length;h++)e(d,k[h]);a._i.push([b,c,f])};a.__SV=1.2;b=e.createElement("script");b.type="text/javascript";b.async=!0;b.src="undefined"!==typeof MIXPANEL_CUSTOM_LIB_URL?MIXPANEL_CUSTOM_LIB_URL:"file:"===e.location.protocol&&"//cdn.mxpnl.com/libs/mixpanel-2-latest.min.js".match(/^\/\//)?"https://cdn.mxpnl.com/libs/mixpanel-2-latest.min.js":"//cdn.mxpnl.com/libs/mixpanel-2-latest.min.js";c=e.getElementsByTagName("script")[0];c.parentNode.insertBefore(b,c)}})(document,window.mixpanel||[]);mixpanel.init("4c30b8635363027dfb780d5a61785112");
        </script>
        <!-- mixpanel analytics end -->
        <script type="text/javascript">
            
                
                    mixpanel.register({
                        "url_path": "/practice/data-structures/arrays/1-d/practice-problems/algorithm/print-array-in-reverse/discussion/",
                        "username": "kanthipriya",
                        "email": "kanthipriya9533@gmail.com",
                        "date_of_joining": "May 13, 2021 08:50 AM",
                        "user_bucket": "41"
                    });
                    
                
            
        </script>
        

        
        
        <div id="fb-root" class=" fb_reset"><div style="position: absolute; top: -10000px; width: 0px; height: 0px;"><div></div></div></div>
        <script>
            <!-- facebook button -->
            (function(d, s, id) {
                var js, fjs = d.getElementsByTagName(s)[0];
                if (d.getElementById(id)) return;
                js = d.createElement(s); js.id = id;
                js.src = "//connect.facebook.net/en_US/all.js#xfbml=1";
                fjs.parentNode.insertBefore(js, fjs);
            }(document, 'script', 'facebook-jssdk'));

            <!-- twitter button -->
            !function(d,s,id){var js,fjs=d.getElementsByTagName(s)[0];if(!d.getElementById(id)){js=d.createElement(s);js.id=id;js.src="//platform.twitter.com/widgets.js";fjs.parentNode.insertBefore(js,fjs);}}(document,"script","twitter-wjs");

            <!-- google+ button -->
            (function() {
                var po = document.createElement('script'); po.type = 'text/javascript'; po.async = true;
                po.src = 'https://apis.google.com/js/plusone.js';
                var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(po, s);
            })();
        </script>
        
        

        
            

<link rel="stylesheet" href="./PrintArrayinRevers_files/cookiebar.ffe531fab344.css">

<script type="text/javascript" src="./PrintArrayinRevers_files/cookiebar.70181766db90.js.download" crossorigin="anonymous"></script>


        

        
            
        

        
            <!-- Hackerearth Zendesk Widget -->




<link rel="stylesheet" href="./PrintArrayinRevers_files/customer-support-widget.c878b5e2cd83.css">

<iframe src="javascript:false" title="" style="display: none;" src="./PrintArrayinRevers_files/saved_resource(1).html"></iframe><script>
    var COUNTRY_CODE = "IN";
    var TRIAL_DAYS_LEFT =  0 ;
    var INTERCOM_APP_ID = 'nofrzq7u';
    var IS_INTERCOM_FEATUTRE_ENABLE = "True";

    var isRecruiterDashboard = false;
    var horizontalOffset = "-500px";
    var zESettingsRecruiterDashboard = {
        webWidget: {
            launcher: {
                label: {
                    "en-US": "",
                    "*": "",
                }
            },
            offset: {
                horizontal: horizontalOffset, /* To hide actual launcher widget */
                vertical: "50px",
                mobile: {
                  horizontal: horizontalOffset,
                },
            },
            position: {
                horizontal: 'right',
                vertical: 'top'
            }
        }
    };

    var zESettingsDefault = {
        webWidget: {
            launcher: {
                label: {
                    "en-US": "",
                    "*": "",
                }
            },
            offset: {
                horizontal: horizontalOffset, /* To hide actual launcher widget */
            }
        }
    };
    if (isRecruiterDashboard) {
        window.zESettings = zESettingsRecruiterDashboard;
    } else {
        window.zESettings = zESettingsDefault;
    }
    /*<![CDATA[*/window.zEmbed||function(e,t){var n,o,d,i,s,a=[],r=document.createElement("iframe");window.zEmbed=function(){a.push(arguments)},window.zE=window.zE||window.zEmbed,r.src="javascript:false",r.title="",r.role="presentation",(r.frameElement||r).style.cssText="display: none",d=document.getElementsByTagName("script"),d=d[d.length-1],d.parentNode.insertBefore(r,d),i=r.contentWindow,s=i.document;try{o=s}catch(e){n=document.domain,r.src='javascript:var d=document.open();d.domain="'+n+'";void(0);',o=s}o.open()._l=function(){var e=this.createElement("script");n&&(this.domain=n),e.id="js-iframe-async",e.src="https://assets.zendesk.com/embeddable_framework/main.js",this.t=+new Date,this.zendeskHost="hackerearth.zendesk.com",this.zEQueue=a,this.body.appendChild(e)},o.write('<body onload="document._l();">'),o.close()}();
    /*]]>*/

    var ZENDESK_LOCALE = "en-US";
    var USER_EMAIL = "kanthipriya9533@gmail.com";
    var USER_NAME = "kanthipriya";
    var ATTACHMENT_LABEL = "Attachments (Optional)";
    var DESCRIPTION_LABEL = "How can we help you, {name}?";

    
</script>
<script type="text/javascript" src="./PrintArrayinRevers_files/customer-support-widget.df6b5efa9ec6.js.download" crossorigin="anonymous" defer=""></script>


    <div class="customer-support-icon">
        <p>?</p>
    </div>


        
    

<div id="tiptip_holder" style="max-width:200px;"><div id="tiptip_arrow"><div id="tiptip_arrow_inner"></div></div><div id="tiptip_content"></div></div><div class="offline-ui offline-ui-up"><div class="offline-ui-content"></div></div><div class="offline-ui offline-ui-up"><div class="offline-ui-content"></div></div><div><div class="grecaptcha-badge" data-style="bottomright" style="width: 256px; height: 60px; display: block; transition: right 0.3s ease 0s; position: fixed; bottom: 14px; right: -186px; box-shadow: gray 0px 0px 5px; border-radius: 2px; overflow: hidden;"><div class="grecaptcha-logo"><iframe title="reCAPTCHA" src="./PrintArrayinRevers_files/anchor.html" width="256" height="60" role="presentation" name="a-qv8cfcxmm5fz" frameborder="0" scrolling="no" sandbox="allow-forms allow-popups allow-same-origin allow-scripts allow-top-navigation allow-modals allow-popups-to-escape-sandbox"></iframe></div><div class="grecaptcha-error"></div><textarea id="g-recaptcha-response-100000" name="g-recaptcha-response" class="g-recaptcha-response" style="width: 250px; height: 40px; border: 1px solid rgb(193, 193, 193); margin: 10px 25px; padding: 0px; resize: none; display: none;"></textarea></div><iframe style="display: none;" src="./PrintArrayinRevers_files/saved_resource(2).html"></iframe></div>
<iframe scrolling="no" frameborder="0" allowtransparency="true" src="./PrintArrayinRevers_files/widget_iframe.06c6ee58c3810956b7509218508c7b56.html" title="Twitter settings iframe" style="display: none;"></iframe><iframe owner="archetype" title="archetype" style="display: none; visibility: hidden;" src="./PrintArrayinRevers_files/saved_resource(3).html"></iframe><iframe id="rufous-sandbox" scrolling="no" frameborder="0" allowtransparency="true" allowfullscreen="true" style="position: absolute; visibility: hidden; display: none; width: 0px; height: 0px; padding: 0px; border: none;" title="Twitter analytics iframe" src="./PrintArrayinRevers_files/saved_resource(4).html"></iframe><iframe data-product="web_widget" title="No content" tabindex="-1" aria-hidden="true" src="./PrintArrayinRevers_files/saved_resource(5).html" style="width: 0px; height: 0px; border: 0px; position: absolute; top: -9999px;"></iframe><div><iframe title="Opens a widget where you can find more information" id="launcher" tabindex="-1" style="width: 133.688px; height: 50px; padding: 0px; margin: 10px 20px; position: fixed; bottom: 30px; overflow: visible; opacity: 0; border: 0px; z-index: 999998; transition-duration: 250ms; transition-timing-function: cubic-bezier(0.645, 0.045, 0.355, 1); transition-property: opacity, top, bottom; top: -9999px; visibility: hidden;" src="./PrintArrayinRevers_files/saved_resource(6).html"></iframe></div></body></html>