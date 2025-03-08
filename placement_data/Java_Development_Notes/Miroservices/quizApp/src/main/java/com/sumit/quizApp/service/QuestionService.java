package com.sumit.quizApp.service;

import com.sumit.quizApp.model.Question;
import com.sumit.quizApp.repository.QuestionDao;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.ResponseEntity;
import org.springframework.stereotype.Service;

import java.util.ArrayList;
import java.util.List;

import static org.springframework.http.HttpStatus.*;

@Service
public class QuestionService {

    @Autowired
    public QuestionDao repo;

    public ResponseEntity<List<Question>> getAllQuestions() {
        try {
            return new ResponseEntity<>(repo.findAll(), OK);
        }
        catch (Exception e) {
            e.getMessage();
        }
        return new ResponseEntity<>(new ArrayList(),BAD_REQUEST);
    }

    public ResponseEntity<List<Question>> getQuestionByCategory(String category) {
        return new ResponseEntity<>(repo.findByCategory(category),OK);
    }

    public ResponseEntity<String> addQuestion(Question question) {
        repo.save(question);
        return new ResponseEntity<>("Success",CREATED);
    }
}
