package com.sumit.question_service.service;


import com.sumit.question_service.model.Question;
import com.sumit.question_service.model.QuestionWrapper;
import com.sumit.question_service.model.Response;
import com.sumit.question_service.repository.QuestionDao;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.HttpStatus;
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

    public ResponseEntity<List<Integer>> getQuestionsForQuiz(String categoryName, Integer numQuestions) {
        List<Integer> questions=repo.findRandomQuestionsByCategory(categoryName,numQuestions);
        return new ResponseEntity<>(questions, HttpStatus.OK);
    }

    public ResponseEntity<List<QuestionWrapper>> getQuestionsFromId(List<Integer> questionIds) {
        List<QuestionWrapper> wrappers=new ArrayList<>();
        List<Question>questions=new ArrayList<>();
        for(Integer id: questionIds)
        {
            questions.add(repo.findById(id).get());
        }
        for(Question question: questions)
        {
            QuestionWrapper wrapper=new QuestionWrapper();;
            wrapper.setId(question.getId());
            wrapper.setQuestionTitle(question.getQuestionTitle());
            wrapper.setOption1(question.getOption1());
            wrapper.setOption2(question.getOption2());
            wrapper.setOption3(question.getOption3());
            wrapper.setOption4(question.getOption4());
            wrappers.add(wrapper);
        }
        return new ResponseEntity<>(wrappers,HttpStatus.OK);
    }

    public ResponseEntity<Integer> getScore(List<Response> responses) {
        int right=0;
        for(Response response:responses)
        {
            Question question=repo.findById(response.getId()).get();
            if(response.getResponse().equals(question.getRightAnswer()))
            {
                right++;
            }
        }
        return new ResponseEntity<>(right,HttpStatus.OK);
    }
}
