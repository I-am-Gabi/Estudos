(function (){ var g="",aa="\n",l=" ",ba='"',ca='", ',da='","groups":["reactions"]},"labels":[',ea='","groups":["reactions"]},{"url": "',fa='"}],"applicationId":34}',ga="%s",ha="(",ia="(\\d*)(\\D*)",ja=")",ka="*",m=".",la="//www.blogger.com/reviews/json/aggregates",ma="//www.blogger.com/reviews/json/token",na="//www.blogger.com/reviews/json/write",oa="0",pa=": ",qa="@",ra="An object listener must have handleEvent method.",sa="Assertion failed",ta="Content-Type",ua="Event target is not initialized. Did you call the superclass (goog.events.EventTarget) constructor?",
va="GET",wa="Listener can not be null.",xa="MSXML2.XMLHTTP",ya="MSXML2.XMLHTTP.3.0",za="MSXML2.XMLHTTP.6.0",Aa="Microsoft.XMLHTTP",n="POST",Ba="[object Array]",Ca="[object Function]",Da="[object Window]",Ea="]",Fa=']}],"applicationId":34}&token=',Ga="_",Ha="a",Ia="abort",Ja="application/x-www-form-urlencoded;charset=utf-8",p="array",Ka="call",La="click",q="complete",Ma="content-type",Na="error",Oa="event",r="function",Pa="g",Qa="infinite loop",Ra="innerText",Sa="keypress",Ta="mouseout",Ua="mouseover",
Va="native code",Wa="null",s="number",t="object",Xa="on",Ya="ready",Za="readystatechange",$a='req={"annotations": [ {"replaceAllLabels":true,"entity": {"url": "',ab='req={"applicationId":34}',bb='req={"entities":[{"url": "',cb="rx-checked",db="rx-count",eb="rx-holder",fb="rx-label",gb="rx-option",hb="rx-unchecked",ib="span",jb="splice",kb="string",lb="success",mb="timeout",nb="var ",ob="window",pb="withCredentials",u,qb=qb||{},v=this,rb=function(a,b,c){a=a.split(m);c=c||v;a[0]in c||!c.execScript||
c.execScript(nb+a[0]);for(var d;a.length&&(d=a.shift());)a.length||void 0===b?c=c[d]?c[d]:c[d]={}:c[d]=b},sb=function(){},w=function(a){var b=typeof a;if(b==t)if(a){if(a instanceof Array)return p;if(a instanceof Object)return b;var c=Object.prototype.toString.call(a);if(c==Da)return t;if(c==Ba||typeof a.length==s&&"undefined"!=typeof a.splice&&"undefined"!=typeof a.propertyIsEnumerable&&!a.propertyIsEnumerable(jb))return p;if(c==Ca||"undefined"!=typeof a.call&&"undefined"!=typeof a.propertyIsEnumerable&&
!a.propertyIsEnumerable(Ka))return r}else return Wa;else if(b==r&&"undefined"==typeof a.call)return t;return b},x=function(a){var b=w(a);return b==p||b==t&&typeof a.length==s},y=function(a){return typeof a==kb},tb=function(a,b,c){return a.call.apply(a.bind,arguments)},ub=function(a,b,c){if(!a)throw Error();if(2<arguments.length){var d=Array.prototype.slice.call(arguments,2);return function(){var c=Array.prototype.slice.call(arguments);Array.prototype.unshift.apply(c,d);return a.apply(b,c)}}return function(){return a.apply(b,
arguments)}},z=function(a,b,c){z=Function.prototype.bind&&-1!=Function.prototype.bind.toString().indexOf(Va)?tb:ub;return z.apply(null,arguments)},A=function(a,b){function c(){}c.prototype=b.prototype;a.superClass_=b.prototype;a.prototype=new c;a.base=function(a,c,f){var h=Array.prototype.slice.call(arguments,2);return b.prototype[c].apply(a,h)}};
Function.prototype.bind=Function.prototype.bind||function(a,b){if(1<arguments.length){var c=Array.prototype.slice.call(arguments,1);c.unshift(this,a);return z.apply(null,c)}return z(this,a)};Function.prototype.partial=function(a){var b=Array.prototype.slice.call(arguments);b.unshift(this,null);return z.apply(null,b)};var B=function(a){if(Error.captureStackTrace)Error.captureStackTrace(this,B);else{var b=Error().stack;b&&(this.stack=b)}a&&(this.message=String(a))};A(B,Error);var vb=function(a,b){for(var c=a.split(ga),d=g,e=Array.prototype.slice.call(arguments,1);e.length&&1<c.length;)d+=c.shift()+e.shift();return d+c.join(ga)},wb=function(a,b){return a<b?-1:a>b?1:0};var xb=function(a,b){b.unshift(a);B.call(this,vb.apply(null,b));b.shift()};A(xb,B);var C=function(a,b,c){if(!a){var d=Array.prototype.slice.call(arguments,2),e=sa;if(b)var e=e+(pa+b),f=d;throw new xb(g+e,f||[]);}return a};var yb=function(a){yb[l](a);return a};yb[l]=sb;var D=Array.prototype,zb=D.indexOf?function(a,b,c){C(null!=a.length);return D.indexOf.call(a,b,c)}:function(a,b,c){c=null==c?0:0>c?Math.max(0,a.length+c):c;if(y(a))return y(b)&&1==b.length?a.indexOf(b,c):-1;for(;c<a.length;c++)if(c in a&&a[c]===b)return c;return-1},Ab=D.forEach?function(a,b,c){C(null!=a.length);D.forEach.call(a,b,c)}:function(a,b,c){for(var d=a.length,e=y(a)?a.split(g):a,f=0;f<d;f++)f in e&&b.call(c,e[f],f,a)},Bb=D.filter?function(a,b,c){C(null!=a.length);return D.filter.call(a,b,
c)}:function(a,b,c){for(var d=a.length,e=[],f=0,h=y(a)?a.split(g):a,k=0;k<d;k++)if(k in h){var W=h[k];b.call(c,W,k,a)&&(e[f++]=W)}return e},Cb=function(a,b,c){t:{for(var d=a.length,e=y(a)?a.split(g):a,f=0;f<d;f++)if(f in e&&b.call(c,e[f],f,a)){b=f;break t}b=-1}return 0>b?null:y(a)?a.charAt(b):a[b]},E=function(a,b){return 0<=zb(a,b)},Eb=function(a,b){var c=zb(a,b),d;(d=0<=c)&&Db(a,c);return d},Db=function(a,b){C(null!=a.length);return 1==D.splice.call(a,b,1).length},Fb=function(a,b,c){C(null!=a.length);
return 2>=arguments.length?D.slice.call(a,b):D.slice.call(a,b,c)};var F;t:{var Gb=v.navigator;if(Gb){var Hb=Gb.userAgent;if(Hb){F=Hb;break t}}F=g};var Ib=-1!=F.indexOf("Opera")||-1!=F.indexOf("OPR"),G=-1!=F.indexOf("Trident")||-1!=F.indexOf("MSIE"),H=-1!=F.indexOf("Gecko")&&-1==F.toLowerCase().indexOf("webkit")&&!(-1!=F.indexOf("Trident")||-1!=F.indexOf("MSIE")),I=-1!=F.toLowerCase().indexOf("webkit"),Jb=function(){var a=v.document;return a?a.documentMode:void 0},Kb=function(){var a=g,b;if(Ib&&v.opera)return a=v.opera.version,w(a)==r?a():a;H?b=/rv\:([^\);]+)(\)|;)/:G?b=/\b(?:MSIE|rv)[: ]([^\);]+)(\)|;)/:I&&(b=/WebKit\/(\S+)/);b&&(a=(a=b.exec(F))?
a[1]:g);return G&&(b=Jb(),b>parseFloat(a))?String(b):a}(),Lb={},L=function(a){var b;if(!(b=Lb[a])){b=0;for(var c=String(Kb).replace(/^[\s\xa0]+|[\s\xa0]+$/g,g).split(m),d=String(a).replace(/^[\s\xa0]+|[\s\xa0]+$/g,g).split(m),e=Math.max(c.length,d.length),f=0;0==b&&f<e;f++){var h=c[f]||g,k=d[f]||g,W=RegExp(ia,Pa),uc=RegExp(ia,Pa);do{var J=W.exec(h)||[g,g,g],K=uc.exec(k)||[g,g,g];if(0==J[0].length&&0==K[0].length)break;b=wb(0==J[1].length?0:parseInt(J[1],10),0==K[1].length?0:parseInt(K[1],10))||wb(0==
J[2].length,0==K[2].length)||wb(J[2],K[2])}while(0==b)}b=Lb[a]=0<=b}return b},Mb=v.document,Nb=Mb&&G?Jb()||("CSS1Compat"==Mb.compatMode?parseInt(Kb,10):5):void 0;var Ob=!G||G&&9<=Nb,Pb=G&&!L("9");!I||L("528");H&&L("1.9b")||G&&L("8")||Ib&&L("9.5")||I&&L("528");H&&!L("8")||G&&L("9");var M=function(){};M.prototype.disposed_=!1;M.prototype.dispose=function(){this.disposed_||(this.disposed_=!0,this.disposeInternal())};M.prototype.disposeInternal=function(){if(this.onDisposeCallbacks_)for(;this.onDisposeCallbacks_.length;)this.onDisposeCallbacks_.shift()()};var N=function(a,b){this.type=a;this.currentTarget=this.target=b;this.defaultPrevented=this.propagationStopped_=!1;this.returnValue_=!0};N.prototype.disposeInternal=function(){};N.prototype.dispose=function(){};N.prototype.preventDefault=function(){this.defaultPrevented=!0;this.returnValue_=!1};var O=function(a,b){N.call(this,a?a.type:g);this.relatedTarget=this.currentTarget=this.target=null;this.charCode=this.keyCode=this.button=this.screenY=this.screenX=this.clientY=this.clientX=this.offsetY=this.offsetX=0;this.metaKey=this.shiftKey=this.altKey=this.ctrlKey=!1;this.event_=this.state=null;a&&this.init(a,b)};A(O,N);
O.prototype.init=function(a,b){var c=this.type=a.type;this.target=a.target||a.srcElement;this.currentTarget=b;var d=a.relatedTarget;if(d){if(H){var e;t:{try{yb(d.nodeName);e=!0;break t}catch(f){}e=!1}e||(d=null)}}else c==Ua?d=a.fromElement:c==Ta&&(d=a.toElement);this.relatedTarget=d;this.offsetX=I||void 0!==a.offsetX?a.offsetX:a.layerX;this.offsetY=I||void 0!==a.offsetY?a.offsetY:a.layerY;this.clientX=void 0!==a.clientX?a.clientX:a.pageX;this.clientY=void 0!==a.clientY?a.clientY:a.pageY;this.screenX=
a.screenX||0;this.screenY=a.screenY||0;this.button=a.button;this.keyCode=a.keyCode||0;this.charCode=a.charCode||(c==Sa?a.keyCode:0);this.ctrlKey=a.ctrlKey;this.altKey=a.altKey;this.shiftKey=a.shiftKey;this.metaKey=a.metaKey;this.state=a.state;this.event_=a;a.defaultPrevented&&this.preventDefault()};
O.prototype.preventDefault=function(){O.superClass_.preventDefault.call(this);var a=this.event_;if(a.preventDefault)a.preventDefault();else if(a.returnValue=!1,Pb)try{if(a.ctrlKey||112<=a.keyCode&&123>=a.keyCode)a.keyCode=-1}catch(b){}};O.prototype.disposeInternal=function(){};var Qb="closure_listenable_"+(1E6*Math.random()|0),P=function(a){return!(!a||!a[Qb])},Rb=0;var Sb=function(a){var b=[],c=0,d;for(d in a)b[c++]=a[d];return b},Tb=function(a){var b=[],c=0,d;for(d in a)b[c++]=d;return b},Ub="constructor hasOwnProperty isPrototypeOf propertyIsEnumerable toLocaleString toString valueOf".split(" "),Vb=function(a,b){for(var c,d,e=1;e<arguments.length;e++){d=arguments[e];for(c in d)a[c]=d[c];for(var f=0;f<Ub.length;f++)c=Ub[f],Object.prototype.hasOwnProperty.call(d,c)&&(a[c]=d[c])}};var Wb=function(a,b,c,d,e,f){this.listener=a;this.proxy=b;this.src=c;this.type=d;this.capture=!!e;this.handler=f;this.key=++Rb;this.removed=this.callOnce=!1};Wb.prototype.markAsRemoved=function(){this.removed=!0;this.handler=this.src=this.proxy=this.listener=null};var Q=function(a){this.src=a;this.listeners={};this.typeCount_=0};u=Q.prototype;u.add=function(a,b,c,d,e){var f=a.toString();a=this.listeners[f];a||(a=this.listeners[f]=[],this.typeCount_++);var h=Xb(a,b,d,e);-1<h?(b=a[h],c||(b.callOnce=!1)):(b=new Wb(b,null,this.src,f,!!d,e),b.callOnce=c,a.push(b));return b};
u.remove=function(a,b,c,d){a=a.toString();if(!(a in this.listeners))return!1;var e=this.listeners[a];b=Xb(e,b,c,d);return-1<b?(e[b].markAsRemoved(),Db(e,b),0==e.length&&(delete this.listeners[a],this.typeCount_--),!0):!1};u.removeByKey=function(a){var b=a.type;if(!(b in this.listeners))return!1;var c=Eb(this.listeners[b],a);c&&(a.markAsRemoved(),0==this.listeners[b].length&&(delete this.listeners[b],this.typeCount_--));return c};
u.removeAll=function(a){a=a&&a.toString();var b=0,c;for(c in this.listeners)if(!a||c==a){for(var d=this.listeners[c],e=0;e<d.length;e++)++b,d[e].markAsRemoved();delete this.listeners[c];this.typeCount_--}return b};u.getListener=function(a,b,c,d){a=this.listeners[a.toString()];var e=-1;a&&(e=Xb(a,b,c,d));return-1<e?a[e]:null};var Xb=function(a,b,c,d){for(var e=0;e<a.length;++e){var f=a[e];if(!f.removed&&f.listener==b&&f.capture==!!c&&f.handler==d)return e}return-1};var Yb="closure_lm_"+(1E6*Math.random()|0),Zb={},$b=0,ac=function(a,b,c,d,e){if(w(b)==p){for(var f=0;f<b.length;f++)ac(a,b[f],c,d,e);return null}c=bc(c);return P(a)?a.listen(b,c,d,e):cc(a,b,c,!1,d,e)},cc=function(a,b,c,d,e,f){if(!b)throw Error("Invalid event type");var h=!!e,k=R(a);k||(a[Yb]=k=new Q(a));c=k.add(b,c,d,e,f);if(c.proxy)return c;d=dc();c.proxy=d;d.src=a;d.listener=c;a.addEventListener?a.addEventListener(b.toString(),d,h):a.attachEvent(ec(b.toString()),d);$b++;return c},dc=function(){var a=
fc,b=Ob?function(c){return a.call(b.src,b.listener,c)}:function(c){c=a.call(b.src,b.listener,c);if(!c)return c};return b},gc=function(a,b,c,d,e){if(w(b)==p){for(var f=0;f<b.length;f++)gc(a,b[f],c,d,e);return null}c=bc(c);return P(a)?a.listenOnce(b,c,d,e):cc(a,b,c,!0,d,e)},hc=function(a,b,c,d,e){if(w(b)==p){for(var f=0;f<b.length;f++)hc(a,b[f],c,d,e);return null}c=bc(c);if(P(a))return a.unlisten(b,c,d,e);if(!a)return!1;if(a=R(a))if(b=a.getListener(b,c,!!d,e))return ic(b);return!1},ic=function(a){if(typeof a==
s||!a||a.removed)return!1;var b=a.src;if(P(b))return b.unlistenByKey(a);var c=a.type,d=a.proxy;b.removeEventListener?b.removeEventListener(c,d,a.capture):b.detachEvent&&b.detachEvent(ec(c),d);$b--;(c=R(b))?(c.removeByKey(a),0==c.typeCount_&&(c.src=null,b[Yb]=null)):a.markAsRemoved();return!0},jc=function(a,b){if(!a)return 0;if(P(a))return a.removeAllListeners(b);var c=R(a);if(!c)return 0;var d=0,e=b&&b.toString(),f;for(f in c.listeners)if(!e||f==e)for(var h=c.listeners[f].concat(),k=0;k<h.length;++k)ic(h[k])&&
++d;return d},ec=function(a){return a in Zb?Zb[a]:Zb[a]=Xa+a},lc=function(a,b,c,d){var e=1;if(a=R(a))if(b=a.listeners[b.toString()])for(b=b.concat(),a=0;a<b.length;a++){var f=b[a];f&&f.capture==c&&!f.removed&&(e&=!1!==kc(f,d))}return Boolean(e)},kc=function(a,b){var c=a.listener,d=a.handler||a.src;a.callOnce&&ic(a);return c.call(d,b)},fc=function(a,b){if(a.removed)return!0;if(!Ob){var c;if(!(c=b))t:{c=[ob,Oa];for(var d=v,e;e=c.shift();)if(null!=d[e])d=d[e];else{c=null;break t}c=d}e=c;c=new O(e,this);
d=!0;if(!(0>e.keyCode||void 0!=e.returnValue)){t:{var f=!1;if(0==e.keyCode)try{e.keyCode=-1;break t}catch(h){f=!0}if(f||void 0==e.returnValue)e.returnValue=!0}e=[];for(f=c.currentTarget;f;f=f.parentNode)e.push(f);for(var f=a.type,k=e.length-1;!c.propagationStopped_&&0<=k;k--)c.currentTarget=e[k],d&=lc(e[k],f,!0,c);for(k=0;!c.propagationStopped_&&k<e.length;k++)c.currentTarget=e[k],d&=lc(e[k],f,!1,c)}return d}return kc(a,new O(b,this))},R=function(a){a=a[Yb];return a instanceof Q?a:null},mc="__closure_events_fn_"+
(1E9*Math.random()>>>0),bc=function(a){C(a,wa);if(w(a)==r)return a;C(a.handleEvent,ra);a[mc]||(a[mc]=function(b){return a.handleEvent(b)});return a[mc]};var S=function(){this.eventTargetListeners_=new Q(this);this.actualEventTarget_=this;this.parentEventTarget_=null};A(S,M);S.prototype[Qb]=!0;u=S.prototype;u.addEventListener=function(a,b,c,d){ac(this,a,b,c,d)};u.removeEventListener=function(a,b,c,d){hc(this,a,b,c,d)};
u.dispatchEvent=function(a){this.assertInitialized_();var b,c=this.parentEventTarget_;if(c){b=[];for(var d=1;c;c=c.parentEventTarget_)b.push(c),C(1E3>++d,Qa)}c=this.actualEventTarget_;d=a.type||a;if(y(a))a=new N(a,c);else if(a instanceof N)a.target=a.target||c;else{var e=a;a=new N(d,c);Vb(a,e)}var e=!0,f;if(b)for(var h=b.length-1;!a.propagationStopped_&&0<=h;h--)f=a.currentTarget=b[h],e=f.fireListeners(d,!0,a)&&e;a.propagationStopped_||(f=a.currentTarget=c,e=f.fireListeners(d,!0,a)&&e,a.propagationStopped_||
(e=f.fireListeners(d,!1,a)&&e));if(b)for(h=0;!a.propagationStopped_&&h<b.length;h++)f=a.currentTarget=b[h],e=f.fireListeners(d,!1,a)&&e;return e};u.disposeInternal=function(){S.superClass_.disposeInternal.call(this);this.removeAllListeners();this.parentEventTarget_=null};u.listen=function(a,b,c,d){this.assertInitialized_();return this.eventTargetListeners_.add(String(a),b,!1,c,d)};u.listenOnce=function(a,b,c,d){return this.eventTargetListeners_.add(String(a),b,!0,c,d)};
u.unlisten=function(a,b,c,d){return this.eventTargetListeners_.remove(String(a),b,c,d)};u.unlistenByKey=function(a){return this.eventTargetListeners_.removeByKey(a)};u.removeAllListeners=function(a){return this.eventTargetListeners_?this.eventTargetListeners_.removeAll(a):0};
u.fireListeners=function(a,b,c){a=this.eventTargetListeners_.listeners[String(a)];if(!a)return!0;a=a.concat();for(var d=!0,e=0;e<a.length;++e){var f=a[e];if(f&&!f.removed&&f.capture==b){var h=f.listener,k=f.handler||f.src;f.callOnce&&this.unlistenByKey(f);d=!1!==h.call(k,c)&&d}}return d&&0!=c.returnValue_};u.getListener=function(a,b,c,d){return this.eventTargetListeners_.getListener(String(a),b,c,d)};u.assertInitialized_=function(){C(this.eventTargetListeners_,ua)};var nc=function(a,b){b.preventDefault();a(b);return!1};var oc=function(a){a=a.className;return y(a)&&a.match(/\S+/g)||[]},pc=function(a,b){for(var c=oc(a),d=Fb(arguments,1),e=c.length+d.length,f=c,h=0;h<d.length;h++)E(f,d[h])||f.push(d[h]);a.className=c.join(l);return c.length==e},rc=function(a,b){var c=oc(a),d=Fb(arguments,1),e=qc(c,d);a.className=e.join(l);return e.length==c.length-d.length},qc=function(a,b){return Bb(a,function(a){return!E(b,a)})},sc=function(a,b){var c=!E(oc(a),b);c?pc(a,b):rc(a,b);return c};!H&&!G||G&&G&&9<=Nb||H&&L("1.9.1");var tc=G&&!L("9");var T=function(a,b,c,d){a=d||a;b=b&&b!=ka?b.toUpperCase():g;if(a.querySelectorAll&&a.querySelector&&(b||c))return a.querySelectorAll(b+(c?m+c:g));if(c&&a.getElementsByClassName){a=a.getElementsByClassName(c);if(b){d={};for(var e=0,f=0,h;h=a[f];f++)b==h.nodeName&&(d[e++]=h);d.length=e;return d}return a}a=a.getElementsByTagName(b||ka);if(c){d={};for(f=e=0;h=a[f];f++)b=h.className,typeof b.split==r&&E(b.split(/\s+/),c)&&(d[e++]=h);d.length=e;return d}return a},vc={SCRIPT:1,STYLE:1,HEAD:1,IFRAME:1,OBJECT:1},
wc={IMG:l,BR:aa},yc=function(a){if(tc&&Ra in a)a=a.innerText.replace(/(\r\n|\r|\n)/g,aa);else{var b=[];xc(a,b,!0);a=b.join(g)}a=a.replace(/ \xAD /g,l).replace(/\xAD/g,g);a=a.replace(/\u200B/g,g);tc||(a=a.replace(/ +/g,l));a!=l&&(a=a.replace(/^\s*/,g));return a},xc=function(a,b,c){if(!(a.nodeName in vc))if(3==a.nodeType)c?b.push(String(a.nodeValue).replace(/(\r\n|\r|\n)/g,g)):b.push(a.nodeValue);else if(a.nodeName in wc)b.push(wc[a.nodeName]);else for(a=a.firstChild;a;)xc(a,b,c),a=a.nextSibling};var U="StopIteration"in v?v.StopIteration:Error("StopIteration"),V=function(){};V.prototype.next=function(){throw U;};V.prototype.__iterator__=function(){return this};
var zc=function(a){if(a instanceof V)return a;if(typeof a.__iterator__==r)return a.__iterator__(!1);if(x(a)){var b=0,c=new V;c.next=function(){for(;;){if(b>=a.length)throw U;if(b in a)return a[b++];b++}};return c}throw Error("Not implemented");},Ac=function(a,b,c){if(x(a))try{Ab(a,b,c)}catch(d){if(d!==U)throw d;}else{a=zc(a);try{for(;;)b.call(c,a.next(),void 0,a)}catch(e){if(e!==U)throw e;}}};var Bc=function(a){a=String(a);if(/^\s*$/.test(a)?0:/^[\],:{}\s\u2028\u2029]*$/.test(a.replace(/\\["\\\/bfnrtu]/g,qa).replace(/"[^"\\\n\r\u2028\u2029\x00-\x08\x0a-\x1f]*"|true|false|null|-?\d+(?:\.\d*)?(?:[eE][+\-]?\d+)?/g,Ea).replace(/(?:^|:|,)(?:[\s\u2028\u2029]*\[)+/g,g)))try{return eval(ha+a+ja)}catch(b){}throw Error("Invalid JSON string: "+a);};var X=function(a,b){this.map_={};this.keys_=[];this.version_=this.count_=0;var c=arguments.length;if(1<c){if(c%2)throw Error("Uneven number of arguments");for(var d=0;d<c;d+=2)this.set(arguments[d],arguments[d+1])}else a&&this.addAll(a)};u=X.prototype;u.getValues=function(){this.cleanupKeysArray_();for(var a=[],b=0;b<this.keys_.length;b++)a.push(this.map_[this.keys_[b]]);return a};u.getKeys=function(){this.cleanupKeysArray_();return this.keys_.concat()};
u.remove=function(a){return Object.prototype.hasOwnProperty.call(this.map_,a)?(delete this.map_[a],this.count_--,this.version_++,this.keys_.length>2*this.count_&&this.cleanupKeysArray_(),!0):!1};
u.cleanupKeysArray_=function(){if(this.count_!=this.keys_.length){for(var a=0,b=0;a<this.keys_.length;){var c=this.keys_[a];Object.prototype.hasOwnProperty.call(this.map_,c)&&(this.keys_[b++]=c);a++}this.keys_.length=b}if(this.count_!=this.keys_.length){for(var d={},b=a=0;a<this.keys_.length;)c=this.keys_[a],Object.prototype.hasOwnProperty.call(d,c)||(this.keys_[b++]=c,d[c]=1),a++;this.keys_.length=b}};u.get=function(a,b){return Object.prototype.hasOwnProperty.call(this.map_,a)?this.map_[a]:b};
u.set=function(a,b){Object.prototype.hasOwnProperty.call(this.map_,a)||(this.count_++,this.keys_.push(a),this.version_++);this.map_[a]=b};u.addAll=function(a){var b;a instanceof X?(b=a.getKeys(),a=a.getValues()):(b=Tb(a),a=Sb(a));for(var c=0;c<b.length;c++)this.set(b[c],a[c])};u.forEach=function(a,b){for(var c=this.getKeys(),d=0;d<c.length;d++){var e=c[d],f=this.get(e);a.call(b,f,e,this)}};u.clone=function(){return new X(this)};u.getKeyIterator=function(){return this.__iterator__(!0)};
u.__iterator__=function(a){this.cleanupKeysArray_();var b=0,c=this.keys_,d=this.map_,e=this.version_,f=this,h=new V;h.next=function(){for(;;){if(e!=f.version_)throw Error("The map has changed since the iterator was created");if(b>=c.length)throw U;var h=c[b++];return a?h:d[h]}};return h};var Cc=function(a){if(typeof a.getValues==r)return a.getValues();if(y(a))return a.split(g);if(x(a)){for(var b=[],c=a.length,d=0;d<c;d++)b.push(a[d]);return b}return Sb(a)},Dc=function(a,b,c){if(typeof a.forEach==r)a.forEach(b,c);else if(x(a)||y(a))Ab(a,b,c);else{var d;if(typeof a.getKeys==r)d=a.getKeys();else if(typeof a.getValues!=r)if(x(a)||y(a)){d=[];for(var e=a.length,f=0;f<e;f++)d.push(f)}else d=Tb(a);else d=void 0;for(var e=Cc(a),f=e.length,h=0;h<f;h++)b.call(c,e[h],d&&d[h],a)}};var Ec=function(a,b,c){if(w(a)==r)c&&(a=z(a,c));else if(a&&typeof a.handleEvent==r)a=z(a.handleEvent,a);else throw Error("Invalid listener argument");return 2147483647<b?-1:v.setTimeout(a,b||0)};var Fc=/^(?:([^:/?#.]+):)?(?:\/\/(?:([^/?#]*)@)?([^/#?]*?)(?::([0-9]+))?(?=[/#?]|$))?([^?#]+)?(?:\?([^#]*))?(?:#(.*))?$/,Gc=I,Hc=function(a,b){if(Gc){Gc=!1;var c=v.location;if(c){var d=c.href;if(d&&(d=(d=Hc(3,d))&&decodeURIComponent(d))&&d!=c.hostname)throw Gc=!0,Error();}}return b.match(Fc)[a]||null};var Ic=function(){};Ic.prototype.cachedOptions_=null;Ic.prototype.getOptions=function(){return this.cachedOptions_||(this.cachedOptions_=this.internalGetOptions())};var Jc,Y=function(){};A(Y,Ic);Y.prototype.createInstance=function(){var a=this.getProgId_();return a?new ActiveXObject(a):new XMLHttpRequest};Y.prototype.internalGetOptions=function(){var a={};this.getProgId_()&&(a[0]=!0,a[1]=!0);return a};
Y.prototype.getProgId_=function(){if(!this.ieProgId_&&"undefined"==typeof XMLHttpRequest&&"undefined"!=typeof ActiveXObject){for(var a=[za,ya,xa,Aa],b=0;b<a.length;b++){var c=a[b];try{return new ActiveXObject(c),this.ieProgId_=c}catch(d){}}throw Error("Could not create ActiveXObject. ActiveX might be disabled, or MSXML might not be installed");}return this.ieProgId_};Jc=new Y;var Z=function(a){S.call(this);this.headers=new X;this.xmlHttpFactory_=a||null;this.active_=!1;this.xhrOptions_=this.xhr_=null;this.lastUri_=g;this.inAbort_=this.inOpen_=this.inSend_=this.errorDispatched_=!1;this.timeoutInterval_=0;this.timeoutId_=null;this.responseType_=g;this.useXhr2Timeout_=this.withCredentials_=!1};A(Z,S);
var Kc=/^https?$/i,Lc=[n,"PUT"],Mc=[],Nc=function(a,b,c,d,e,f,h){var k=new Z;Mc.push(k);b&&k.listen(q,b);k.listenOnce(Ya,k.cleanupSend_);f&&k.setTimeoutInterval(f);h&&k.setWithCredentials(h);k.send(a,c,d,e);return k};Z.prototype.cleanupSend_=function(){this.dispose();Eb(Mc,this)};Z.prototype.setTimeoutInterval=function(a){this.timeoutInterval_=Math.max(0,a)};Z.prototype.setWithCredentials=function(a){this.withCredentials_=a};
Z.prototype.send=function(a,b,c,d){if(this.xhr_)throw Error("[goog.net.XhrIo] Object is active with another request="+this.lastUri_+"; newUri="+a);b=b?b.toUpperCase():va;this.lastUri_=a;this.errorDispatched_=!1;this.active_=!0;this.xhr_=this.createXhr();this.xhrOptions_=this.xmlHttpFactory_?this.xmlHttpFactory_.getOptions():Jc.getOptions();this.xhr_.onreadystatechange=z(this.onReadyStateChange_,this);try{this.inOpen_=!0,this.xhr_.open(b,String(a),!0),this.inOpen_=!1}catch(e){this.error_(5,e);return}a=
c||g;var f=this.headers.clone();d&&Dc(d,function(a,b){f.set(b,a)});d=Cb(f.getKeys(),Oc);c=v.FormData&&a instanceof v.FormData;!E(Lc,b)||d||c||f.set(ta,Ja);f.forEach(function(a,b){this.xhr_.setRequestHeader(b,a)},this);this.responseType_&&(this.xhr_.responseType=this.responseType_);pb in this.xhr_&&(this.xhr_.withCredentials=this.withCredentials_);try{this.cleanUpTimeoutTimer_(),0<this.timeoutInterval_&&((this.useXhr2Timeout_=Pc(this.xhr_))?(this.xhr_.timeout=this.timeoutInterval_,this.xhr_.ontimeout=
z(this.timeout_,this)):this.timeoutId_=Ec(this.timeout_,this.timeoutInterval_,this)),this.inSend_=!0,this.xhr_.send(a),this.inSend_=!1}catch(h){this.error_(5,h)}};var Pc=function(a){return G&&L(9)&&typeof a.timeout==s&&void 0!==a.ontimeout},Oc=function(a){return Ma==a.toLowerCase()};u=Z.prototype;u.createXhr=function(){return this.xmlHttpFactory_?this.xmlHttpFactory_.createInstance():Jc.createInstance()};u.timeout_=function(){"undefined"!=typeof qb&&this.xhr_&&(this.dispatchEvent(mb),this.abort(8))};
u.error_=function(){this.active_=!1;this.xhr_&&(this.inAbort_=!0,this.xhr_.abort(),this.inAbort_=!1);this.dispatchErrors_();this.cleanUpXhr_()};u.dispatchErrors_=function(){this.errorDispatched_||(this.errorDispatched_=!0,this.dispatchEvent(q),this.dispatchEvent(Na))};u.abort=function(){this.xhr_&&this.active_&&(this.active_=!1,this.inAbort_=!0,this.xhr_.abort(),this.inAbort_=!1,this.dispatchEvent(q),this.dispatchEvent(Ia),this.cleanUpXhr_())};
u.disposeInternal=function(){this.xhr_&&(this.active_&&(this.active_=!1,this.inAbort_=!0,this.xhr_.abort(),this.inAbort_=!1),this.cleanUpXhr_(!0));Z.superClass_.disposeInternal.call(this)};u.onReadyStateChange_=function(){if(!this.disposed_)if(this.inOpen_||this.inSend_||this.inAbort_)this.onReadyStateChangeHelper_();else this.onReadyStateChangeEntryPoint_()};u.onReadyStateChangeEntryPoint_=function(){this.onReadyStateChangeHelper_()};
u.onReadyStateChangeHelper_=function(){if(this.active_&&"undefined"!=typeof qb&&(!this.xhrOptions_[1]||4!=this.getReadyState()||2!=this.getStatus()))if(this.inSend_&&4==this.getReadyState())Ec(this.onReadyStateChange_,0,this);else if(this.dispatchEvent(Za),this.isComplete()){this.active_=!1;try{this.isSuccess()?(this.dispatchEvent(q),this.dispatchEvent(lb)):this.dispatchErrors_()}finally{this.cleanUpXhr_()}}};
u.cleanUpXhr_=function(a){if(this.xhr_){this.cleanUpTimeoutTimer_();var b=this.xhr_,c=this.xhrOptions_[0]?sb:null;this.xhrOptions_=this.xhr_=null;a||this.dispatchEvent(Ya);try{b.onreadystatechange=c}catch(d){}}};u.cleanUpTimeoutTimer_=function(){this.xhr_&&this.useXhr2Timeout_&&(this.xhr_.ontimeout=null);typeof this.timeoutId_==s&&(v.clearTimeout(this.timeoutId_),this.timeoutId_=null)};u.isComplete=function(){return 4==this.getReadyState()};
u.isSuccess=function(){var a=this.getStatus(),b;t:switch(a){case 200:case 201:case 202:case 204:case 206:case 304:case 1223:b=!0;break t;default:b=!1}return b||0===a&&!this.isLastUriEffectiveSchemeHttp_()};u.isLastUriEffectiveSchemeHttp_=function(){var a=Hc(1,String(this.lastUri_));!a&&self.location&&(a=self.location.protocol,a=a.substr(0,a.length-1));return Kc.test(a?a.toLowerCase():g)};u.getReadyState=function(){return this.xhr_?this.xhr_.readyState:0};
u.getStatus=function(){try{return 2<this.getReadyState()?this.xhr_.status:-1}catch(a){return-1}};u.getResponseJson=function(a){if(this.xhr_){var b=this.xhr_.responseText;a&&0==b.indexOf(a)&&(b=b.substring(a.length));return Bc(b)}};var Qc=function(a,b){this.entityId_=encodeURIComponent(a);b?this.sender_=b:(this.sender_=Z,this.sender_.send=Nc);this.writeToken_=g;this.options_={};this.counts_={};this.decodeLabel_={};this.selectedReactions_=new X};u=Qc.prototype;
u.initialize=function(a){a=T(document,Ha,gb,document.getElementById(a));for(var b=0;b<a.length;b++){var c=a[b],d=T(document,ib,fb,c)[0],d=yc(d);this.options_[d]=c;var e=this.encodeLabel_(d);this.decodeLabel_[e]=d;var e=c,f=z(this.toggle,this,d);ac(e,La,nc.partial(f));c=T(document,ib,db,c)[0];this.counts_[d]=c;c.innerHTML=oa}a=z(this.displayRetrievedAnnotations_,this);b=z(this.disableOptions_,this);this.loadExistingReactions_(a,b)};u.setZipitToken_=function(a){this.writeToken_=a};
u.loadZipitToken_=function(a){var b=z(this.disableOptions_,this),c=z(this.setZipitToken_,this),d=z(this.toggle,this);this.sender_.send(ma,function(){if(this.isSuccess()){var e=this.getResponseJson();c(e.channelHeader.token);a&&d(a)}else b()},n,ab)};u.loadExistingReactions_=function(a,b){this.sender_.send(la,function(){this.isSuccess()?a(this.getResponseJson()):b()},n,bb+this.entityId_+ea+this.entityId_+fa)};
u.displayRetrievedAnnotations_=function(a){if(a.entityAggregates)for(var b=0;b<a.entityAggregates.length;b++){var c=!1;if(c=a.entityAggregates[b].labels)for(var d=0;d<c.length;d++){var e=this.counts_[this.decodeLabel_[c[d].label]];if(e){var f=parseInt(yc(e),10);isNaN(f)&&(f=0);e.innerHTML=f+parseInt(c[d].count,10)}}}};u.encodeLabel_=function(a){a=a.replace(/([^A-Za-z ])/g,function(a){return Ga+a.charCodeAt(0)});return a=a.replace(/([A-Z])/g,function(a){return Ga+a.toLowerCase()})};
u.disableOptions_=function(){for(var a=T(document,Ha,gb,document.getElementById(eb)),b=0;b<a.length;b++){var c=a[b];c.style.borderColor=null;jc(c)}};
u.toggle=function(a){if(this.writeToken_==g)this.loadZipitToken_(a);else{if(this.selectedReactions_.get(a)){var b=!1;this.selectedReactions_.remove(a)}else b=!0,this.selectedReactions_.set(a,!0);var c=g;Ac(this.selectedReactions_.getKeyIterator(),function(a){c=c+ba+this.encodeLabel_(a)+ca},this);this.sender_.send(na,sb,n,$a+this.entityId_+da+c+Fa+this.writeToken_);var d=this.options_[a];if(d){a=this.counts_[a];var e=parseInt(yc(a),10);isNaN(e)&&(e=0);a.innerHTML=b?e+1:e-1;sc(d,cb);sc(d,hb)}}};rb("BLOG_Annotator",Qc,void 0);Qc.prototype.initialize=Qc.prototype.initialize;rb("BLOG_listenOnce",gc,void 0); })()
