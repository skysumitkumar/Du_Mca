	var ie = false;
	var lastNote = '';
	if (document.all) { ie = true; }

	function getObj(id) {
		if (ie) {
			return document.all[id];
		} else {
			return document.getElementById(id);
		}
	}

	function showNote(name) {
		if (name == lastNote) {
			hideNote(name);
			return;
		}

		if (lastNote != '') { hideNote(lastNote); }
		var title = getObj(name + '_title');
		var body = getObj(name + '_body');
		//title.className = 'notehidden';
		body.className = 'notevisible';
		lastNote = name;
	}

	function hideNote(name) {
		var title = getObj(name + '_title');
		var body = getObj(name + '_body');
		//title.className = 'note';
		body.className = 'notehidden';
		lastNote = '';
	}

