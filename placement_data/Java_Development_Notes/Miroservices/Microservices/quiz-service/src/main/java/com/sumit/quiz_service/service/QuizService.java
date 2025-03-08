package com.sumit.quiz_service.service;

import com.sumit.quiz_service.feign.QuizInterface;
import com.sumit.quiz_service.model.Question;
import com.sumit.quiz_service.model.QuestionWrapper;
import com.sumit.quiz_service.model.Quiz;
import com.sumit.quiz_service.model.Response;
import com.sumit.quiz_service.repository.QuizDao;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.stereotype.Service;

import java.util.ArrayList;
import java.util.List;
import java.util.Optional;

@Service
public class QuizService {

    @Autowired
    QuizDao quizDao;

    @Autowired
    QuizInterface quizInterface;

    public ResponseEntity<String> createQuiz(String category, int numQ, String title) {
        //it give us ResponseEntity but we want body
        List<Integer>questions=quizInterface.getQuestionsForQuiz(category,numQ).getBody();
        Quiz quiz=new Quiz();
        quiz.setTitle(title);
        quiz.setQuestionsIds(questions);
        quizDao.save(quiz);
        return new ResponseEntity<>("Success", HttpStatus.CREATED);
    }

    public ResponseEntity<List<QuestionWrapper>> getQuizQuestion(int id) {
        Optional<Quiz> quiz=quizDao.findById(id);
        List<Integer> questionIds=quiz.get().getQuestionsIds();
        quizInterface.getQuestionsFromId(questionIds);
        ResponseEntity<List<QuestionWrapper>>questions=quizInterface.getQuestionsFromId(questionIds);
        return questions;
    }

    public ResponseEntity<Integer> calculateResult(int id, List<Response> responses) {
        ResponseEntity<Integer>score=quizInterface.getScore(responses);
        return score;
    }
}
